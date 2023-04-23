#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter radius: ";
	double rad;
	cin >> rad;
	
	
	double d;
	double A;
	double C;
	
	if (rad > 0)
	{
		d = 2 * rad;
		C = M_PI * d;
		A = M_PI * rad * rad;
		cout << "The area and perimeter of the circle are: " << A << " and " << C << endl;
		
	}
	else
	{
		cout << "Enter positive integer. " << endl;
	}
	return 0;
}
