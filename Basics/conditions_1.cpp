#include <iostream>

using namespace std;

int main()
{
	cout << "Enter integer a: ";
	int a;
	cin >> a;
	
	cout << "Enter integer b: ";
	int b;
	cin >> b;
	
	if (a > b)
	{
		cout << "A is: " << a << endl;
	}
	else if (b > a)
	{
		cout << "B is: " << b << endl;
	}
	
	return 0;
}
