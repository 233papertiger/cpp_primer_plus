#include <iostream>
#include "sales.h"
#include <climits>

void SALES::setSales(SALES::Sales &s, const double ar[], int n) {
	double total = 0, max = 0, min = ar[0];
	int i;
	for ( i=0; i<n and i<4; ++i ) {
		total += ar[i];
		s.sales[i] = ar[i];
		if ( ar[i] > max ) max = ar[i];
		if ( ar[i] < min ) min = ar[i];
	}

	s.average = total / i;
	s.max = max;
	s.min = min;
}

void SALES::setSales(SALES::Sales &s) {
	int i;
	double total = 0, min = LLONG_MAX, max = 0;
	for ( i = 0; i < SALES::QUARTERS; ++i ) {
		std::cout << "Enter the sale: ";
		std::cin >> s.sales[i];
		total += s.sales[i];
		if ( s.sales[i] > max ) max = s.sales[i];
		if ( s.sales[i] < min ) min = s.sales[i];
	}
	s.average = total / i;
	s.max = max;
	s.min = min;
}

void SALES::showSales(const SALES::Sales &s) {
	using namespace std;
	cout << "Sales: ";
	for ( int i = 0; i < SALES::QUARTERS; ++i )
		cout << s.sales[i] << " ";
	cout << endl;
	cout << "average: " << s.average << endl;
	cout << "max: " << s.max << endl;
	cout << "min: " << s.min << endl;
}
