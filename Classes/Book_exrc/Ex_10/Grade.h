#ifndef GRADE_H
#define GRADE_H

#include <string>

using namespace std;

class Grade
{
	public:
		void setGrade(const string &grade);
		string getGrade() const;
		double numGrade(const string &gradee) const;
		
	private:
		string grade;
};

#endif
