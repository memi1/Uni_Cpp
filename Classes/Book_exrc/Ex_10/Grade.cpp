#include <iostream>
#include <string>

using namespace std;

#include "Grade.h"

void Grade::setGrade(const string &grade)
{
	this->grade = grade;
}

string Grade::getGrade() const
{
	return grade;
}

double Grade::numGrade(const string &gradee) const
{
	
	if (gradee == "F")
	{
		return 0.0;
	}
	else if (gradee == "D")
	{
		return 1.0;
	}
	else if (gradee == "D+")
	{
		return 1.3;
	}
	else if (gradee == "C-")
	{
		return 1.7;
	}
	else if (gradee == "C")
	{
		return 2.0;
	}
	else if (gradee == "C+")
	{
		return 2.3;
	}
	else if (gradee == "B-")
	{
		return 2.7;
	}
	else if (gradee == "B")
	{
		return 3.0;
	}
	else if (gradee == "B+")
	{
		return 3.3;
	}
	else if (gradee == "A-")
	{
		return 3.7;
	}
	else if (gradee == "A")
	{
		return 4.0;
	}
	else if (gradee == "A+")
	{
		return 4.4;
	}
	else
	{
		return 0.0;
	}
	return 0.0;
}
