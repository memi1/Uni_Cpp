#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter radius value: ";
	double r;
	cin >> r;
	
	double S = 4 * M_PI * r * r;
	
	double V = (4 / 3) * M_PI * pow(r, 3);
	
	cout << "The surface of the sphere is: " << S << "\nThe volume of the sphere is: " << V << endl;
	
	return 0;
}
