#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Country.h"

int main()
{
	vector<Country> vec;
	
	Country c;
	
	for (int i = 0; i < 5; i++)
	{
		c.read();
		vec.push_back(c);
	}
	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << "Country name: " << vec[i].getName() 
		<< " , population: " << vec[i].getPopulation() 
		<< " , area: " << vec[i].getArea() << endl;
	}
	
	Country max_area = vec[0];
	Country max_pop = vec[0];
	Country max_dens = vec[0];
	
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].largestArea(max_area))
		{
			max_area = vec[i];
		}
		
		if (vec[i].largestPopulation(max_pop))
		{
			max_pop = vec[i];
		}
		
		if (vec[i].largestDensity(max_dens))
		{
			max_dens = vec[i];
		}
	}
	cout << "Country with the largest area: " << max_area.getName() 
	<< " area: " << max_area.getArea() << endl;
	
	cout << "Country with the largest population: " << max_pop.getName() 
	<< " population: " << max_pop.getArea() << endl;
	
	cout << "Country with the largest density: " << max_dens.getName() << endl;
	
	return 0;
}


