#include <iostream>
#include <string>

using namespace std;

#include "Account.h"
#include "Bank.h"

void Bank::deposit(double amount, string account)
{
	if (account == "S")
	{
		savings.addMoney(amount);
	}
	else if (account == "C")
	{
		checking.addMoney(amount);
	}
	else
	{
		cout << "Unknown command!" << endl;
	}
}

void Bank::withdraw(double amount, string account)
{
	if (account == "S")
	{
		savings.withdrawMoney(amount);
	}
	else if (account == "C")
	{
		checking.withdrawMoney(amount);
	}
	else
	{
		cout << "Unknown command!" << endl;
	}
}

void Bank::transfer(double amount, string account)
{
	if (account == "S")
	{
		savings.withdrawMoney(amount);
		checking.addMoney(amount);
	}
	else if (account == "C")
	{
		checking.withdrawMoney(amount);
		savings.addMoney(amount);
	}
	else 
	{
		cout << "Unknown command!" << endl;
	}
}

void Bank::print_balances() const
{
	cout << "Saving balance is: " << savings.getBalance() << endl;
	cout << "Checking balance is: " << checking.getBalance() << endl;
} 

