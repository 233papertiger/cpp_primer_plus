#include <iostream>

const int FACTOR = 60;

int main() {
	using namespace std;
	double deg, min, sec;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees:";
	cin >> deg;  
	
	cout << "Next, enter the minutes of arc:";
	cin >> min;  
	cout << "Finally, enter the seconds of arc:";
	
	cin >> sec;
	cout << deg << " degrees, " 
		 << min << "minutes, " 
		 << sec << "seconds="
		 << deg + min / FACTOR + sec / (FACTOR * FACTOR)
		 << " degrees" << endl;
	
	return 0;
}
