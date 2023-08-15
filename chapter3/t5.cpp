#include <iostream>


int main() {
    using namespace std;

	double mile, dis;
	cout << "Enter the mileage(mile):";
	cin >> mile;

	cout << "Enter the using gas consumption(gallon):";
	cin >> dis;

	cout << "One gallon gas can drive " << mile / dis << " mile." << endl; 
	return 0;
}


