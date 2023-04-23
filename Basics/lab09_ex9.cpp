#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

const int INTERVAL = 100;

double pointDist(double x, double y)
{
	double sq_x = x * x;
	double sq_y = y * y;
	double distance = sqrt(sq_x + sq_y);
	
	return distance;
}

double pi(int circle_points, int square_points)
{
		double p =(double) (4 * circle_points) / square_points;
		return p;
}

int main()
{
	double x;
	double y;
	
	srand(time(0));
	
	int circle_points = 0;
	int square_points = 0;
	
	for (int i = 0; i < INTERVAL * INTERVAL; i++)
	{
		x = double(rand() % (INTERVAL + 1)) / INTERVAL;
		y = double(rand() % (INTERVAL + 1)) / INTERVAL;
		cout << x << y << endl;
		double dist = pointDist(x, y);
		cout << dist << endl;
		if (dist <= 1)
		{
			circle_points++;
		}
		square_points++;
		double pie = pi(circle_points, square_points);
		cout << "Value of Pi is: " << pie << endl;
		
	}
	
	return 0;
}
