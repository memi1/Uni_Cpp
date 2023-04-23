#include <iostream>
#include <cmath>

using namespace std;

double pointDist(double x1, double y1, double x2, double y2)
{
	double square_x = (x1 - x2) * (x1 - x2);
	double square_y = (y1 - y2) * (y1 - y2);
	double distance = sqrt(square_x + square_y);
	return distance;
}

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
	
	
	cout << "The distance between the points is: " << pointDist(x1, y1, x2, y2)<< endl;
	
	return 0;
}
