#include <iostream>

using namespace std;

#include "Point.h"

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

void Point::setX(double x)
{
	this->x = x;
}

double Point::getX() const
{
	return x;
}

void Point::setY(double y)
{
	this->y = y;
}

double Point::getY() const
{
	return y;
}
