#include <iostream>


int main() {
    using namespace std;

    double mile, gal;
    cout << "Enter the mileage(mile):";
    cin >> mile;

    cout << "Enter the using gas consumption(gallon):";
    cin >> gal;

    cout << "One gallon gas can drive " << mile / gal << " mile." << endl;
    return 0;
}

