#include <iostream>
#include <string>

using namespace std;

#include "Student.h"
#include "Grade.h"

void Student::setName(const string &name)
{
	this->name = name;
}

string Student::getName() const
{
	return name;
}

void Student::setGrade(const string &grade)
{
	grd.setGrade(grade);
}

string Student::getGrade() const
{
	return grd.getGrade();
}

void Student::addQuiz(const string &grade)
{
	double grade_num = grd.numGrade(grade);
	total_score += grade_num;	
}

double Student::totalScore() const
{
	return total_score;
}

