// usesales.cpp
#include <iostream>
#include "sales.h"


int main() {
    using namespace SALES;
    Sales s1;
    s1.showSales();
    
    double arr1[Sales::QUARTERS] = {
        12.1, 13.2, 19.5, 15.4
    };

    Sales s2(arr1, Sales::QUARTERS);
	s2.showSales();
    return 0;
}
