#include <iostream>

using namespace std;

#include "Point.h"
#include "Polygon.h"

int main()
{
	Point p;
	
	p.setX(5.4);
	p.setY(4.3);
	
	p.print();
	
	Polygon pn(7);
	
	pn.read();
	pn.print();
	
	
	return 0;
}
