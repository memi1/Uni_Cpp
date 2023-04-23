#include <iostream>

using namespace std;

void isLeap(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		cout << year << " year is leap." << endl;
	}
	else
	{
		cout << year << " year is not leap." << endl;
	}
}

int main()
{
	cout << "Enter year: ";
	int year;
	cin >> year;
	
	isLeap(year);
	
	return 0;
}
