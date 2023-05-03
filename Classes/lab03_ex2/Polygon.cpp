#include <iostream>
#include <cassert>

using namespace std;

#include "Point.h"
#include "Polygon.h"

Polygon::Polygon(int num)
{	
	assert (num > 0);
	vec.resize(num);
}

void Polygon::read()
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": ";
		double x;
		cin >> x;
		vec[i].setX(x);
		double y;
		cin >> y;
		vec[i].setY(y);
		
	}
}

void Polygon::print() const
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i].print();
		cout << " "; 
	}
	cout << endl;
}


