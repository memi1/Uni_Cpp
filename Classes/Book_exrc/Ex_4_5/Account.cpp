#include <iostream>
#include <cmath>

using namespace std;

#include "Account.h"

const double Account::PENALTY = 5.0;

Account::Account()
{
	balance = 0.0;
}

void Account::read()
{
	cout << "Enter your balance: ";
	cin >> balance;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

double Account::getBalance() const
{
	return balance;
}

void Account::addMoney(double add)
{
	balance += add;
}

void Account::withdrawMoney(double withdraw)
{
	if (withdraw > balance)
	{
		cout << "Current balance is: " << getBalance()
		 << " withdraw sum is: " << withdraw << " penalty is: " 
		 << PENALTY << endl;
		balance -= PENALTY;
	}
	else
	{
		balance -= withdraw;
	}
}

void Account::interest(int percent)
{
	double doub_balance = balance * 2;
	double interest_rate = percent / 100.0;
	double rate = pow(1 + (interest_rate/ 12.0), 12.0);
	
	int i = 0;
	
	while (balance <= doub_balance)
	{
		balance *= rate;
		i++;
		cout << "Year: " << i << " Investment: " << balance << endl;
	}

}
