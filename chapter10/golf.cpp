#include <iostream>
#include "golf.h"
#include <cstring>


golf::golf(const char * name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

golf::golf() {
    std::cout << "Enter your name: ";
    std::cin.getline(fullname, Len);

	while ( strcmp(fullname, "") == 0 ) {
		if ( std::cin.fail() ) {
			std::cin.clear();
			while ( std::cin.get() != '\n' )
				continue;
		}
		std::cout << "Enter your name: ";
		std::cin.getline(fullname, Len);
	}
    std::cout << "Enter your handicap: ";
    (std::cin >> handicap).get();
}

void golf::sethandicap(int hc) {
    handicap = hc;
}

void golf::showgolf() {
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "handicap: " << handicap << std::endl;
}


char *golf::getfullname() {
	return fullname;
}


golf::~golf() {

}
