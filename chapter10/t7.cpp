#include "plorg.h"
#include <iostream>


int main() {
	std::cout << "Enter name: ";
    char username[plorg::Size];
    std::cin.get(username, plorg::Size);
    
    int ci;
    std::cout << "Enter ci: ";
    std::cin >> ci;
    
    plorg p(username, ci);
    p.show();
    std::cout << "Reset the ci value." << std::endl;
    
    p.setCI(12);
    p.show();
    return 0;
}
