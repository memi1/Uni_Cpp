#include <iostream>

using namespace std;

#include "Account.h"

int main()
{
	Account a1;
	a1.setBalance(3600);
	cout << "Account balance is: " << a1.getBalance() << endl;
	
	a1.addMoney(120);
	cout << "New balance after adding is: " << a1.getBalance() << endl;
	
	a1.withdrawMoney(780);
	cout << "New balance after withdrawing is: " << a1.getBalance() << endl;	
	
	Account a2;
	a2.setBalance(4100);
	cout << "Account balance is: " << a2.getBalance() << endl;
	
	a2.withdrawMoney(4200);
	cout << "New balance after withdrawing is: " << a2.getBalance() << endl;
	
	Account a3;
	a3.read();
	cout << "Account balance is: " << a3.getBalance() << endl;
	
	cout << "Enter percent for interest rate: ";
	int percent;
	cin >> percent;
		
	a3.interest(percent);
	cout << "Balance is: " << a3.getBalance() << endl;
	
	return 0;
}
