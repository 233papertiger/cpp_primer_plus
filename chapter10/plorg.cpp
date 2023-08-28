// plorg.cpp
#include <iostream>
#include "plorg.h"
#include <cstring>

plorg::plorg(const char name[], int a) {
    strcpy(fullname, name);
    ci = a;
}

plorg::~plorg() {
    
}

void plorg::setCI(int i) {
    ci = i;
}

void plorg::show() const {
	std::cout << "fullname: " << fullname << 
        ", ci = " << ci << std::endl;
}

