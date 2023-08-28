#include <iostream>
#include "Account.h"
#include <cctype>


int main() {
	using namespace std;
	char ch;
	string username, number;
	double m = 0.0;

	
	cout << "Enter your name: ";
	getline(cin, username);
	cout << "Enter your number: ";
	
	getline(cin, number);
	Account acc{ username, number, 0.0};
	
	cout << "Enter s to save money, w to withdraw money, " 
		 << "p to print your account information and q to quit.\n";

	while ( cin>>ch ) {
		while ( cin.get() != '\n' ) continue;
		switch(ch) {
			case 'p':
			case 'P':
				acc.showAccount();
				break;

			case 'q':
			case 'Q':
				cout << "Bye!" << endl;
				goto outer;
	
				
			case 's':
			case 'S':
				cout << "Enter amount of the money: ";
				(cin>>m).get();

				acc.saveMoney(m);
				break;

			case 'w':
			case 'W':
				cout << "Enter amount of the money: ";
				double m = 0.0;
				(cin>>m).get();
				acc.withdrawMoney(m);
				break;
		}	
		cout << "Enter s to save money, w to withdraw money, " 
			 << "p to print your account information and q to quit.\n";
	}
	outer:
	return 0;
}


