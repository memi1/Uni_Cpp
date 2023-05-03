#include <iostream>
#include <string>

using namespace std;

#include "Grade.h"
#include "Student.h"

int main()
{
	Grade g1;
	g1.setGrade("B+");
	cout << "Grade is: " << g1.getGrade() << endl;

	cout << g1.numGrade("C") << endl;
	
	
	Student s1;
	s1.setName("Alice");
	cout << "name is: " << s1.getName() << endl;
	s1.addQuiz("A");
	s1.addQuiz("B");
	s1.addQuiz("B+");
	cout << "Total GPA: " << s1.totalScore() << endl;
	
	
	return 0;
}
