#include <iostream>

using namespace std;

const double TARGET = 1200.0;
const double INITIAL_BALANCE = 100.0;
const double RATE = 10.0;

int main()
{
	double balance = INITIAL_BALANCE;
	int year = 0;
	while (balance < TARGET)
	{
		year++;
		double interest = balance * RATE / 100;
		balance += interest;
		cout << "Year: " << year << " Interest is: " << interest << " Balance is: " << balance << endl;
	}
	
	return 0;
}
