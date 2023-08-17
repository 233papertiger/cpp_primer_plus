#include <iostream>
#include <string>


int main() {
	using namespace std;
	string first_name, last_name;
	char grade_letter;

	unsigned short age;
	cout << "What is your first name? ";
	getline(cin, first_name);

	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";

	cin.get(grade_letter).get();
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << "," << first_name << endl;
	cout << "Grade:" << (char)(grade_letter+1) << endl;
	cout << "Age:" << age << endl;
	return 0;
}
