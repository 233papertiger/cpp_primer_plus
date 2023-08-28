#include <iostream>
#include "sales.h"
#include <climits>

using namespace SALES;
Sales::Sales(const double ar[], int n) {
    double total = 0, max = 0, min = ar[0];
    int i;
    for ( i = 0; i < n and i < Sales::QUARTERS; ++i ) {
        total += ar[i];
        sales[i] = ar[i];
        if ( ar[i] > max ) max = ar[i];
        if ( ar[i] < min ) min = ar[i];
    }

    _average = total / i;
    _max = max;
    _min = min;
}

Sales::Sales() {
    int i;
    double total = 0, min = LLONG_MAX, max = 0;
    for ( i = 0; i < Sales::QUARTERS; ++i ) {
        std::cout << "Enter the sale: ";
        std::cin >> sales[i];
        total += sales[i];
        if ( sales[i] > max ) max = sales[i];
        if ( sales[i] < min ) min = sales[i];
    }
    _average = total / i;
    _max = max;
    _min = min;
}

void Sales::showSales() const {
    using namespace std;
    cout << "Sales: ";
    for ( int i = 0; i < Sales::QUARTERS; ++i )
        cout << sales[i] << " ";
    
    cout << endl;
    cout << "average: " << _average << endl;
    cout << "max: " << _max << endl;
    cout << "min: " << _min << endl;
}


Sales::~Sales() {
    
}
