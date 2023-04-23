#include <iostream>
#include <cmath>

using namespace std;

double sphereArea(double rad)
{
	if (rad < 0)
	{
		return -1;
	}
	else
	{
		double res = 4 * M_PI * rad * rad;
		return res;
	}
}

int main()
{
	cout << "Enter radius: ";
	double rad;
	cin >> rad;
	
	cout << "The surface are of the sphere is: " << sphereArea(rad) << endl;

	return 0;
}
