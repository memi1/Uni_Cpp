#include <iostream>

using namespace std;

class Car
{
	public:
		Car();
		void setEfficiency(double efficiency);
		void setAmount(double amount);
		double getEfficiency() const;
		double getAmount() const;
		void add(double fuel);
		void drive(double km);
		
	private:
		double fuel_efficiency;
		double fuel_amount;
};

Car::Car()
{
	fuel_efficiency = 0.0;
	fuel_amount = 0.0;
}

void Car::setEfficiency(double efficiency)
{
	fuel_efficiency = efficiency;
}

void Car::setAmount(double amount)
{
	fuel_amount = amount;
}

double Car::getEfficiency() const
{
	return fuel_efficiency;
}

double Car::getAmount() const
{
	return fuel_amount;
}

void Car::add(double fuel)
{
	fuel_amount += fuel;
}

void Car::drive(double km)
{
	fuel_amount -= (km / fuel_efficiency);
}

int main()
{
	Car c1;
	c1.setEfficiency(29);
	c1.setAmount(20);
	cout << "Fuel efficiency is: " << c1.getEfficiency() << endl;
	cout << "Fuel amount is: " << c1.getAmount() << endl;
	
	c1.add(58);
	c1.drive(120);
	
	cout << "The fuel in the tank is: " << c1.getAmount() << endl;	
	
	Car c2;
	c2.setEfficiency(37);
	c2.add(42);
	c2.drive(130);
	cout << "Fuel in the tank: " << c2.getAmount() << endl;
	
	
	return 0;
}
