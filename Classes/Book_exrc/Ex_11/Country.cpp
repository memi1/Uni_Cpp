#include <iostream>
#include <string>

using namespace std;

#include "Country.h"

Country::Country()
{
	population = 0.0;
	area = 0.0;
}

void Country::read()
{
	cout << "Enter country name: ";
	cin >> country_name;
	cout << "Enter population: ";
	cin >> population;
	cout << "Enter area: ";
	cin >> area;
}

string Country::getName() const
{
	return country_name;
}

double Country::getPopulation() const
{
	return population;
}

double Country::getArea() const
{
	return area;
}

bool Country::largestArea(Country &c) const
{
	return area > c.area;
}

bool Country::largestPopulation(Country &c) const
{
	return population > c.population;
}

bool Country::largestDensity(Country &c) const
{
	double density_orig = population / area;
	double density_sec = c.population / c.area;
	
	return density_orig > density_sec;
}
