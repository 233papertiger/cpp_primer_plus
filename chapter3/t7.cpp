#include <iostream>


const double GALLON2LITER = 3.875;
const double MILE2KM = 1.61;
int main() {
    using namespace std;

    double british_consum;
    cout << "Enter the british fuel consumption:";
    cin >> british_consum;


    cout << "American fuel consumption=" 
		 << 100 / ((british_consum / GALLON2LITER) * MILE2KM) 
		 << " l/100km." << endl;
    return 0;
}
