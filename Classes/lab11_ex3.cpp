#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

class Circle
{
	public:
		Circle();
		Circle(double x, double y, double rad);
		void read();
		void print();
		double perim() const;
		double area() const;
	
	private:
		static const double PI;
		double x;
		double y;
		double rad;
};
const double Circle::PI = 3.14159265359;

Circle::Circle()
{
	x = 0.0;
	y = 0.0;
	rad = 0.0;
}

Circle::Circle(double x, double y, double rad)
{
	this->x = x;
	this->y = y;
	this->rad = rad;
}

void Circle::read()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter radius: ";
	cin >> rad;
	assert (rad > 0);
}

double Circle::perim() const
{
	double d = 2 * rad;
	double C = PI * d;
	return C;
}

double Circle::area() const
{
	double A = PI * rad * rad;
	return A;
}

void Circle::print()
{
	cout << "The area is: " << area() << " and the perimeter is: " << perim() << endl;
}

int main()
{
	Circle c1;
	
	Circle c2;
	c2.read();
	c2.area();
	c2.perim();
	c2.print();
	
	return 0;
}
