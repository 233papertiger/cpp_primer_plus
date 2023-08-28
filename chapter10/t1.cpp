#include <iostream>
#include "Person.h"

int main() {
	using namespace std;
	Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    
	two.Show();
	cout <<endl;

	three.Show();
	return 0;
}
