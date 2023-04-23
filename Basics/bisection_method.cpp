#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 10;
const double EPS = 1.0e-14;

double func(double x)
{
	double f;
	if (x >= 1.0 && x <= 2.2)
	{
		f = cos(2 * x * x - 3 * x);
	}
	return f;
}

void bisection(double a, double b)
{
	double p = 0.0;  // mid of the interval
	for (int i = 0; i < MAX; i++)
	{
		cout << "Interval: [" << a << ", " << b << "]" << endl;
		double half_size = (b - a) / 2;
		p = a + half_size;
		if (fabs(func(p)) < EPS || half_size < EPS)
		{
			break;
		}
		else
		{
			if (func(a) * func(p) > 0)
			{
				a = p; // solution is in the right side
			}
			else 
			{
				b = p; // solution is in the left side
			}
		}
	}
	cout << "Found solution: " << p << endl;
}

int main()
{
	cout << "Enter a: ";
	double a;
	cin >> a;
	
	cout << "Enter b: ";
	double b;
	cin >> b;
	
	bisection(a, b);
	return 0;
}
