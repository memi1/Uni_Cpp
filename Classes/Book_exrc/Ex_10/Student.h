#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

#include "Grade.h"

class Student
{	
	public:
		void setName(const string &name);
		string getName() const;
		void setGrade(const string &grade);
		string getGrade() const;
		void addQuiz(const string &grade);
		double totalScore() const;
		
	private:
		string name;
		Grade grd;
		double total_score;
	
};

#endif
