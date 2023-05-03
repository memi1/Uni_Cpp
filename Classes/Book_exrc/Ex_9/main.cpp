#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

int main()
{
	Student s1;
	
	s1.setName("Alice");
	
	s1.addQuiz(42);
	s1.addQuiz(77);
	s1.addQuiz(74);
	
	cout << "Name of student is: " << s1.getName() << endl;
	cout << "Total score is: " << s1.totalScore() << endl;
	cout << "Number of quizzes is: " << s1.numQuizzes() << endl;
	cout << "Avarage score of tests is: " << s1.avrgScore() << endl;
	
	
	return 0;
}
