#include <iostream>

using namespace std;

int main()
{
	cout << "Enter first number: ";
	int a;
	cin >> a;
	
	cout << "Enter second number: ";
	int b;
	cin >> b;
	
	cout << "Enter third number: ";
	int d;
	cin >> d;
	
	for (int i = a; i <= b; i++)
	{
		if (i % d == 0)
		{
			cout << i << " is divisible by " << d << endl;
		}
	}
	
	return 0;
}
