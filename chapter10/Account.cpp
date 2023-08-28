#include <iostream>
#include "Account.h"

Account::Account() {
	username = "";
	number = "";
	amount = 0.0;
}

Account::Account(const std::string &s, const std::string &num, double a) {
	username = s;
	number = num;
	amount = a;
}

Account::~Account() {
}

void Account::showAccount() const {
	std::ios_base::fmtflags orig =
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	std::cout << "User name: " << username
			  << ", number: " << number 
			  << ", amount: " << amount 
			  << std::endl;

	std::cout.setf(orig, std::ios_base::floatfield);
	std::cout.precision(prec);
}

bool Account::saveMoney(double m) {
	if ( m < 0 ) {
		std::cout << "Save money can't be negative\n";
		return false;
	} else {
		std::cout << "Successful save money!!!\n";
		amount += m;
		return true;
	}
}


bool Account::withdrawMoney(double m) {
	if ( m < 0 ) {
		std::cout << "Withdraw money can't be negative\n";
		return false;
	} else if ( m > amount ) {
		std::cout << "Your account don't have enough money!\n";
		return false;
	} else {
		std::cout << "Successfully withdraw money!!!\n";
		amount -= m;
		return true;
	}
}

