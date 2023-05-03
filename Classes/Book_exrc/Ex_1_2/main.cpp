#include <iostream>
#include <string>

using namespace std;

#include "Person.h"
#include "PEmployee.h"

int main()
{
	Person p1("Viper", 42);
	cout << "Name is: " << p1.getName() << endl;
	cout << "Age is: " << p1.getAge() << endl;
	
	
	PEmployee pe1("Kim", 2500);
	cout << "Salary : " << pe1.getSalary() << endl;
	cout << "Name: " << pe1.getName() << endl;
	
	return 0;
}
