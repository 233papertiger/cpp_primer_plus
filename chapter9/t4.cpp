#include <iostream>
#include "sales.h"


int main() {
	using SALES::Sales;	
	Sales s1;
	double arr1[SALES::QUARTERS] = {
		12.1, 13.2, 19.5, 15.4 
	};
	
	SALES::setSales(s1, arr1, 4);
	SALES::showSales(s1);

	Sales s2;
	SALES::setSales(s2);
	SALES::showSales(s2);
	return 0;
}
