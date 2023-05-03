#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
using namespace std;

class Country
{
	public:
		Country();
		void read();
		string getName() const;
		double getPopulation() const;
		double getArea() const;
		bool largestArea(Country &c) const;	
		bool largestPopulation(Country &c) const;
		bool largestDensity(Country &c) const; 	
		
	private:
		string country_name;
		double population;
		double area;
};

#endif
