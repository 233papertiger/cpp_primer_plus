#include <iostream>
#include <cstring>
#include "cd2.h"


Cd::Cd(const char * s1, const char * s2, int n, double x) {
    int sz1 = strlen(s1) + 1;
	int sz2 = strlen(s2) + 1;
	
	performers = new char[sz1];
	label = new char[sz2];
	strcpy(performers, s1);

	performers[sz1-1] = '\0'; 
	strcpy(label, s2);
	label[sz2-1] = '\0';
    
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d) {
	int sz1 = strlen(d.performers) + 1;
	int sz2 = strlen(d.label) + 1;

	performers = new char[sz1];
	label = new char[sz2];

	strcpy(performers, d.performers);
	strcpy(label, d.label);	
	performers[sz1-1] = '\0';
	label[sz2-1] = '\0';
    
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
    performers = nullptr;
    label = nullptr;
    
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
	delete[] performers;
	delete[] label;
}

void Cd::Report() const {
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
}

Cd & Cd::operator=(const Cd & d) {
	if (this == &d)
		return *this;

	delete[] performers;
	delete[] label;
	int sz1 = strlen(d.performers) + 1;
	int sz2 = strlen(d.label);

	performers = new char[sz1];
	label = new char[sz2];
	performers[sz1-1] = '\0';

	label[sz2-1] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(): Cd() {
    composition = nullptr;
}


Classic::Classic(const char * s1, const char * s2, 
		const char * s3, int n, double x): Cd(s1, s2, n, x) {
   int sz = strlen(s3) + 1;
   composition = new char[sz];
   strcpy(composition, s3);
   composition[sz-1] = '\0';
}


Classic::Classic(const Classic & clsc): Cd(clsc) {
   int sz = strlen(clsc.composition) + 1;
   composition = new char[sz];
   strcpy(composition, clsc.composition);
   composition[sz-1] = '\0';
}

Classic::~Classic() {
	delete[] composition;
}

void Classic::Report() const{
    std::cout << "composition: " << composition << std::endl;
}

Classic & Classic::operator=(const Classic &d) {
	if (this == &d)
		return *this;
	delete[] composition;

	int sz = strlen(d.composition) + 1;
	composition = new char[sz];
	strcpy(composition, d.composition);
	composition[sz-1] = '\0';
	return *this;
}
