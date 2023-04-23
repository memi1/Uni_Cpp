#include <iostream>
#include <iomanip>

using namespace std;

#define ABS(n) (n < 0 ? -n : n)

const double EPS = 1.0e-14;

int main()
{
	cout << "Enter x: ";
	double x;
	cin >> x;
	
	cout << "Enter y: ";
	double y;
	cin >> y;
	
	double res = ABS(x - y);
	
	if (res == EPS)
	{
		cout << "Equal." << endl;
	}
	else
	{
		cout << "Aren't equal. " << setprecision(8) << res << endl;
	}
	
	return 0;
}
