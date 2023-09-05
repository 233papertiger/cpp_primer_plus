#include <iostream>
#include <cstring>
#include "cd.h"


Cd::Cd(const char * s1, const char * s2, int n, double x) {
    strncpy(performers, s1, 49);
    strncpy(label, s2, 19);
    
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    strncpy(performers, d.performers, 49);
    strncpy(label, d.label, 19);
    
    selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
    
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
}

void Cd::Report() const {
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
}

Cd & Cd::operator=(const Cd & d) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(): Cd() {
    composition[0] = '\0';
}


Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x): Cd(s1, s2, n, x) {
    strncpy(composition, s3, 49);
    
}


Classic::Classic(const Classic & clsc): Cd(clsc) {
    strncpy(composition, clsc.composition, 49);
}

Classic::~Classic() {}

void Classic::Report() const{
    std::cout << "composition: " << composition << std::endl;
}

Classic & Classic::operator=(const Classic &clsc) {
    Cd::operator=(clsc);
    strncpy(composition, clsc.composition, 49);
	return *this;
}
