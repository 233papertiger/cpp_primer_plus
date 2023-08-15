#include <iostream>

int main(){
    using namespace std;
	double tempra;
    cout << "Please enter a Celsius value: ";
	
	cin >> tempra;
    cout << tempra << " degrees Celsius is "  
		 << tempra * 1.8 + 32.0 << " degrees Fahrenheit."
		 << endl;
	return 0;
}
