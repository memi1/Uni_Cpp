#include <iostream>

using namespace std;

class Point
{
	public: 
		Point();
		Point(double x, double y);
		void print() const;
		
	private:
		double x;
		double y;
	
};

Point::Point()
{
	x = 0.0;
	y = 0.0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::print() const
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

int main()
{
	Point* ptr_point = nullptr;
	ptr_point = new Point(1, 2);
	
	ptr_point->print();
	(*ptr_point).print();
	
	if (ptr_point)
	{
		delete ptr_point;
		ptr_point = nullptr;
	}


	return 0;
}
