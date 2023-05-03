#include <iostream>
#include <string>

using namespace std;

#include "Person.h"
#include "PEmployee.h"

PEmployee::PEmployee()
{
	salary = 0.0;
}

PEmployee::PEmployee(const string &name, double salary)
{
	data.setName(name);
	this->salary = salary;
}

void PEmployee::setSalary(double salary)
{
	this->salary = salary;
}

double PEmployee::getSalary() const
{
	return salary;
}

string PEmployee::getName() const
{
	return data.getName();
}
