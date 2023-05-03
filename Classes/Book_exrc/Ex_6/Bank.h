#ifndef BANK_H
#define BANK_H

#include <string>

using namespace std;

#include "Account.h"

class Bank
{
	public:
		void deposit(double amount, string account);
		void withdraw(double amount, string account);
		void transfer(double amount, string account);
		void print_balances() const;
				
	private:
		Account checking;
		Account savings;
};

#endif
