#include <iostream>
#include "stonewt06.h"


int main() {
    Stonewt arr[6] = {
		Stonewt(127.0, Stonewt::Mode::STONE),
		Stonewt(131.0, Stonewt::Mode::STONE),
		Stonewt(124.0, Stonewt::Mode::STONE)
	};

    int j = 3;
    double val = 0.0;
	for ( int i = 0; i < 3; ++i ) {
        std::cout << "Enter the val of stone: ";
        std::cin >> val;
        arr[j++] = Stonewt(val);
    }
        
    std::cout << "arr[0] > arr[1]: " << (arr[0] > arr[1]) << std::endl;
    std::cout << "arr[2] <= arr[3]: " << (arr[2] <= arr[3]) << std::endl;
    std::cout << "arr[5] == arr[3]: " << (arr[5] == arr[3]) << std::endl;
    
    return 0;
}
