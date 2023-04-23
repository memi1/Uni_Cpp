#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter a: ";
	int a;
	cin >> a;
	
	cout << "Enter b: ";
	int b;
	cin >> b;
	
	cout << "Enter c: ";
	int c;
	cin >> c;
	
	int S;
	int s = (a + b + c) / 2.0;
	
	if (0 < a <= b <= c && a + b > c && b + c > a && a + c > b)
	{
		S = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "The area S is: " << S << endl;
	}
	else
	{
		cout << "The condition is not met." << endl;
	}
	
	return 0;
}
