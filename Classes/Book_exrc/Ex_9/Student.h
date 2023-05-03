#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
	public:
		Student();
		void setName(string name);
		string getName() const;
		void addQuiz(int score);
		int totalScore() const;
		int numQuizzes() const;
		double avrgScore() const;
		
	private:
		string name;
		int total_score;
		int num_quizzes;
};

#endif
