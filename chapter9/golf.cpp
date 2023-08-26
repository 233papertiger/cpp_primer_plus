#include <iostream>
#include "golf.h"
#include <cstring>


void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g) {
    std::cout << "Enter your name: ";
	std::cin.getline(g.fullname, Len);
    std::cout << "Enter your handicap: ";
	(std::cin >> g.handicap).get();
    
    if ( strcmp(g.fullname, "") == 0 )
        return 0;
    else
        return 1;
}


void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    std::cout << "fullname: " << g.fullname << std::endl;
    std::cout << "handicap: " << g.handicap << std::endl;
}
