#include <iostream>
#include <cassert>

using namespace std;

void transform(int grade)
{
	if (grade == 2)
	{
		cout << "The grade is: F " << endl;
	}
	else if (grade == 3)
	{
		cout << "The grade is: D " << endl;
	}
	else if (grade == 4)
	{
		cout << "The grade is: C " << endl;
	}
	else if (grade == 5)
	{
		cout << "The grade is: B " << endl;
	}
	else
	{
		cout << "The grade is: A " << endl;
	}
}

int main()
{
	cout << "Enter grade: ";
	int grade;
	cin >> grade;
	
	assert (grade >= 2 && grade <= 6);
	
	transform(grade);
	
	return 0;
}
