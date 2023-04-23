#include <iostream>

using namespace std;

double dabs(double x)
{
	if (x < 0)
	{
		return -x;
	}
	else
	{
		return x;
	}
}

int main()
{
	cout << "Enter flaoting-point number: ";
	double number;
	cin >> number;
	
	cout << "The absolute value of: " << number << " is " << dabs(number) << endl;
	
	
	return 0;
}
