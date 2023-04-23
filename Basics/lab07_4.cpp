#include <iostream>
#include <cmath>

using namespace std;

double pointDist(double x1, double y1, double x2, double y2);
double trianglePerim(double x1, double y1, double x2, double y2, double x3, double y3);

int main()
{
	cout << "Enter x coordinates for first point: ";
	double x1;
	cin >> x1;
	
	cout << "Enter y coordinates for first point: ";
	double y1;
	cin >> y1;
	
	cout << "Enter x coordinates for second point: ";
	double x2;
	cin >> x2;
	
	cout << "Enter y coordinates for second point: ";
	double y2;
	cin >> y2;
	
	cout << "Enter x coordinates for third point: ";
	double x3;
	cin >> x3;
	
	cout << "Enter y coordinates for third point: ";
	double y3;
	cin >> y3;
	
	cout << "The perimeter of the points is: " << trianglePerim(x1, y1, x2, y2, x3, y3) << endl;
	
	return 0;
}
double pointDist(double x, double y, double q, double p)
{
	double square_x = (x - q) * (x - q);
	double square_y = (y - p) * (y - p);
	double distance = sqrt(square_x + square_y);
	
	return distance;
}
double trianglePerim(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a = pointDist(x1, y1, x2, y2);
	double b = pointDist(x2, y2, x3, y3);
	double c = pointDist(x1, y1, x3, y3);
	
	double perim = a + b + c;
	
	return perim;
}
