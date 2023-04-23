#include <iostream>
#include <cassert>

using namespace std;

void transform(int grade)
{
	switch (grade)
	{
		case 2:
			grade = "F";
			break;
		case 3:
			grade = "D";
			break;
		case 4: 
			grade = "C";
			break;
		case 5:
			grade = "B";
			break;
		case 6:
			grade = "A";
			break;
		default:
			grade = "unknown";
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
