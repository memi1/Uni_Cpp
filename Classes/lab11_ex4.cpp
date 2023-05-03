#include <iostream>

using namespace std;

class Point
{
	public:
		Point();
		Point(double &x, double &y);
		void readPoint();
		void printPoint() const;
		void setPoint(double fpoint, double spoint);
		double getX() const; 
		double getY() const;
		void shift(double x_shift, double y_shift);
		
	private:
		double x;
		double y;
};

Point::Point()
{
	x = 0.0;
	y = 0.0;
}

Point::Point(double &x, double &y)
{
	this->x = x;
	this->y = y;
}

void Point::readPoint()
{
	cout << "Enter x coordinate: ";
	cin >> x;
	cout << "Enter y coordinate: ";
	cin >> y;
}

void Point::printPoint() const
{
	cout << "Point (x, y) is: " << x << " " <<  y << endl;
}

void Point::setPoint(double fpoint, double spoint)
{
	x = fpoint;
	y = spoint;
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

void Point::shift(double x_shift, double y_shift)
{
	x += x_shift;
	y += y_shift;
}

int main()
{
	Point p1;
	p1.readPoint();
	p1.printPoint();
	
	Point p2;
	p2.setPoint(3.9, 2.9);
	cout << p2.getX() << "  " << p2.getY() << endl;
	
	Point p3;
	p3.readPoint();
	p3.printPoint();
	p3.shift(2.2, 4.4);
	p3.printPoint();
	
	return 0;
}
