#include <iostream>

using namespace std;

#include "Account.h"
#include "Bank.h"

int main()
{
	Account a1;
	a1.setBalance(2300);
	cout << "Balance: " << a1.getBalance() << endl;

	a1.addMoney(200);
	cout << "New balance: " << a1.getBalance() << endl;
	
	a1.withdrawMoney(2600);
	cout << "New balance: " << a1.getBalance() << endl;
	
	a1.withdrawMoney(180);
	cout << "New balance: " << a1.getBalance() << endl;


	Bank b1;
	
	b1.deposit(350, "S");
	b1.deposit(550, "C");
	
	b1.withdraw(20, "S");
	b1.withdraw(600, "C");
	
	b1.transfer(100, "S");
	b1.transfer(50, "C");
	
	b1.print_balances();	

	return 0;
}
