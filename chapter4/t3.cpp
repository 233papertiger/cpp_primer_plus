#include <iostream>
#include <cstring>


int main() {
	using namespace std;
	const int size = 100;
	char first_name[size], last_name[size];
	cout << "Enter your first name:";

	cin.getline(first_name, size);
	cout << "Enter your last name:";
	cin.getline(last_name, size);
	strncat(last_name, ", ", size - strlen(last_name) - 3);

	strncat(last_name, first_name, strlen(first_name));
	cout << "Here's the information in a single string: " << last_name  << endl;
	cout << "The combination of name length is: " << strlen(last_name) << endl;
	
	return 0;
}
