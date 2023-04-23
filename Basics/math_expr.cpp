#include <iostream>
#include <cmath>

using namespace std;

double projMotion(double h0, double v0, double t, double g)
{
	return h0 + (v0 * t) + (0.5 * g * t * t);
}

double kepplerLaw(int a, double p, double m1, double m2)
{
	return (4 * M_PI) * (pow (a, 3) / (p * p * (m1 + m2)));
}

double futureValue(double pv, double interest, int yrs)
{
	return pv * pow((1 + (interest / 100)), yrs);
}

int cosLaw(int aa, int bb, double cosine)
{
	return sqrt(aa * aa + bb * bb - 2 * aa * bb * cosine);
}

int volCyl(int rad, int heigth)
{
	return M_PI * rad * rad * heigth;
}

int volSphr(int rad)
{
	return 4 * M_PI * pow(rad, 3) / 3;
}

int main()
{	
	cout << "Enter initial heigth: ";
	double h0;
	cin >> h0;
	
	cout << "Enter initial velocity: ";
	double v0;
	cin >> v0;
	
	cout << "Enter time: ";
	double t;
	cin >> t;
	
	cout << "Enter accelaration: ";
	double g;
	cin >> g;
	
	cout << projMotion(h0, v0, t, g) << " m." << endl;
	
	cout << "Enter axis: ";
	int a;
	cin >> a;
	
	cout << "Enter period: ";
	double p;
	cin >> p;
	
	cout << "Enter mass of first object: ";
	double m1;
	cin >> m1;
	
	cout << "Enter mass of second object: ";
	double m2;
	cin >> m2;
	
	cout << "Gravity: " << kepplerLaw(a, p, m1, m2) << endl;
	
	cout << "Enter present value: ";
	double pv;
	cin >> pv;
	
	cout << "Enter interest: ";
	double interest;
	cin >> interest;
	
	cout << "Enter years: ";
	int yrs;
	cin >> yrs;
	
	cout << "Future value: " << futureValue(pv, interest, yrs) << endl;
	
	cout << "Enter a: ";
	int aa;
	cin >> aa;
	
	cout << "Enter b: ";
	int bb;
	cin >> bb;
	
	cout << "Enter degrees: ";
	double deg;
	cin >> deg;
	
	double cosine = cos(deg);
	cout << "c is: " << cosLaw(aa, bb, cosine) << endl;
	
	cout << "Enter radius: ";
	int rad;
	cin >> rad;
	
	cout << "Enter height: ";
	int heigth; 
	cin >> heigth;
	
	cout << "Volume of cylinder is: " << volCyl(rad, heigth) << " cm" << endl;
	cout << "Volume of sphere is : " << volSphr(rad) << " cm" << endl;
	
	return 0;	
}
