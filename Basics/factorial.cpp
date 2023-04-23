#include <iostream>

using namespace std;

int main()
{
	cout << "Enter number: ";
	int n;
	cin >> n;
	
	int prod = 1;
	
	if (n < 0)
	{
		cout << "Number should be positive integer." << endl;
	}
	else
	{
		for (int i = n; i >= 1; i--)
		{
			prod *= i;
		}
		cout << "Factorial of " << n << " is: " << prod << endl;
	}
		
	return 0;
}
