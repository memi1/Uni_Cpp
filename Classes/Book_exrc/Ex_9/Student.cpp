#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

Student::Student()
{
	total_score = 0;
	num_quizzes = 0;
}

void Student::setName(string name)
{
	this->name = name;
}

string Student::getName() const
{
	return name;
}

void Student::addQuiz(int score)
{
	int br = 0;
	total_score += score;
	br++;
	num_quizzes += br;	
}

int Student::totalScore() const
{
	return total_score;
}

int Student::numQuizzes() const
{
	return num_quizzes;
}

double Student::avrgScore() const
{
	double avrg = total_score / num_quizzes;
	return avrg;
}
