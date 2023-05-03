#include <iostream>

using namespace std;

#include "Point.h"

int main()
{
	Point p1(2.3, 1.4);
	
	cout << p1.getX() << "  " << p1.getY() << endl;
	
	Point p2;
	
	p2.setX(1.4);
	p2.setY(5.6);
	
	cout << p2.getX() << " " << p2.getY() << endl;
	
	return 0;
}
