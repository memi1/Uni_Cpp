#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter number: ";
	int num;
	cin >> num;
	
	if (num > 0)
	{
		cout << "The square root of: " << num << " is: " << sqrt(num) << endl;
	}
	else
	{
		cout << "Number should be positive." << endl;
	}
	return 0;
}
