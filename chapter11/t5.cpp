#include <iostream>
#include "stonewt.h"


int main() {
    Stonewt stn1(137.0, Stonewt::POUND);
    std::cout << stn1 << std::endl;
    
    Stonewt stn2(2, 13.0);
    std::cout << stn2 << std::endl;
    
    Stonewt stn3 = stn1 + stn2;
    std::cout << stn3 << std::endl;
    
    std::cout << stn2 * 2 << std::endl;
    
    return 0;
}
