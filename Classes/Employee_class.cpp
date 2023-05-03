#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Employee
{
	public:
		Employee();
		Employee(const string &name, double salary);
		void setName(const string &name);
		void setSalary(double salary);
		string getName() const;
		double getSalary() const;
		void raiseSalary(double percent);
		void print() const;
		
	private:
		string name;
		double salary;
};

Employee::Employee()
{
	salary = 0.0;
}

Employee::Employee(const string &name, double salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::setName(const string &name)
{
	this->name = name;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

string Employee::getName() const
{
	return name;
}

double Employee::getSalary() const
{
	return salary;
}

void Employee::raiseSalary(double percent)
{
	salary = salary + (salary * (1 * percent / 100));
}

void Employee::print() const
{
	cout << "Name: " << getName() << " Salary: " << getSalary() << endl;
}

int main()
{
	Employee e1;
	
	e1.setName("Viper");
	e1.setSalary(12000);
	e1.print();
	
	Employee e2("Killjoy", 4500);
	e2.raiseSalary(35);
	e2.print();
	

	return 0;
}
