#ifndef PEMPLOYEE_H
#define PEMPLOYEE_H

#include "Person.h"

class PEmployee
{
	public:
		PEmployee();
		PEmployee(const string &name, double salary);
		void setSalary(double salary);
		double getSalary() const;
		string getName() const;
		
	private:
		Person data;
		double salary;
};

#endif
