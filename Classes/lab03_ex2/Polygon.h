#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

using namespace std;

#include "Point.h"

class Polygon
{
	public:
		Polygon(int num);
		void read();
		void print() const;
		
	protected:
		vector<Point> vec;
};

#endif
