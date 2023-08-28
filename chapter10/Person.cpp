#include "Person.h"
#include <cstring>
#include <iostream>

Person::Person(const string & ln, const char * fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    std::cout << "lname = " << lname
        << ", fname = " << fname;
}

void Person::FormalShow() const {
    std::cout << "lname = " << lname
        << ", fname = " << fname 
        << std::endl;
}
