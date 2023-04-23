#include <iostream>
#include <cmath>

using namespace std;

const double EPS = 1.0e-14;

double fabs(double num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

void quadEquation(double a, double b, double c)
{
	if (fabs(a) < EPS)
	{
		if (fabs(b) < EPS)
		{
			cout << "No solution." << endl;
		}		
		else
		{
			double x = -c / b;
			cout << "One root: " << x << endl;
		}
	}
	else
	{
		double delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			cout << "No solution." << endl;
		}
		else
		{
			double sqr_delta = sqrt(delta);
			double root1 = (-b + sqr_delta) / (2 * a);
			double root2 = (-b - sqr_delta) / (2 * a);
			cout << "x1 = " << root1 << endl;
			cout << "x2 = " << root2 << endl;
		}
	}
}

int main()
{
	cout << "Enter number for a: ";
	double a;
	cin >> a;
	
	cout << "Enter number for b: ";
	double b;
	cin >> b;
	
	cout << "Enter number for c: ";
	double c;
	cin >> c;
	
	quadEquation(a, b, c);

	return 0;
}
