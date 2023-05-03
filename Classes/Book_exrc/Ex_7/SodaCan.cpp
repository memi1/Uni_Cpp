#include <iostream>
#include <cmath>

using namespace std;

class SodaCan
{
	public:
		SodaCan();
		void read();
		double getHeight() const;
		double getRadius() const;
		double getSurface() const;
		double getVolume() const;
		
	private:
		double height;
		double radius;
};

SodaCan::SodaCan()
{
	height = 0.0;
	radius = 0.0;
}

void SodaCan::read()
{
	cout << "Enter height for the soda can: ";
	cin >> height;
	
	cout << "Enter radius: ";
	cin >> radius;
}

double SodaCan::getHeight() const
{
	return height;
}

double SodaCan::getRadius() const
{
	return radius;
}

double SodaCan::getSurface() const
{
	return 2 * M_PI * radius * height + (2 * M_PI * radius * radius);
}

double SodaCan::getVolume() const
{
	return M_PI * radius * radius * height;
}

int main()
{
	SodaCan sc1;
	
	sc1.read();
	cout << "Height is: " << sc1.getHeight() << endl;
	cout << "Radius is: " << sc1.getRadius() << endl;
	
	cout << "The Surface is: " << sc1.getSurface() << "  The Volume is: " << sc1.getVolume() << endl;
	
	
	return 0;
}
