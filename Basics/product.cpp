#include <iostream>

using namespace std;

int main()
{
	cout << "Enter number: ";
	int num;
	cin >> num;
	
	int prod = 1;
	
	for (int i = 1; i <= num; i++)
	{
		prod *= i;
	}
	cout << "Product of " << num << " is " << prod << endl;
	
	return 0;
}
