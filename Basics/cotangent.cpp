#include <iostream>
#include <cmath>

using namespace std;

double radians(double angle)
{
	return (angle * M_PI) / 180.0;
}

int main()
{
	cout << "Enter angle in degrees: ";
	double angle;
	cin >> angle;
	
	double tanres = tan(radians(angle));
	
	double cotg = pow(tanres, -1);
	
	cout << "The cotangent of the angle " << angle << " is: " << cotg << endl; 
	
	return 0;
}
