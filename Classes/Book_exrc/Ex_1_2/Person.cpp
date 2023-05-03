#include <iostream>
#include <string>

using namespace std;

#include "Person.h"

Person::Person()
{
	age = 0;
}

Person::Person(const string &name, int age)
{
	this->name = name;
	this->age = age;
}

void Person::setName(const string &name)
{
	this->name = name;
}

string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}


