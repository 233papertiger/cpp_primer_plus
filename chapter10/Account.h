#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account{
	private:
		std::string username;
		std::string number;
		double amount;
	
	public:
		Account();
		Account(const std::string &s, const std::string &num, double a);
		~Account();
		void showAccount() const;
		bool saveMoney(double m);
		bool withdrawMoney(double m);
};


#endif
