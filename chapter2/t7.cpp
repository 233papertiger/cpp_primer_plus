#include <iostream>

using namespace std;
void show_time(int hours, int minutes);
int main(){
	int hours, minutes;
	cout << "Enter the number of hours:";
	cin >> hours;
	
	cout << "Enter the number of minutes:";
	cin >> minutes;
	show_time(hours, minutes);
	return 0;
}

void show_time(int hours, int minutes) {
	using namespace std;
	cout << "Time: " << hours << ":" << minutes << endl;
}
