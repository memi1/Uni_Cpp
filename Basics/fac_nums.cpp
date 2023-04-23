#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter name of first student: ";
	string name;
	cin >> name;
	
	cout << "Enter faculty number of 1st sutdent: ";
	int fnum;
	cin >> fnum;
	
	cout << "Enter name of second student: ";
	string name2;
	cin >> name2;
	
	cout << "Enter faculty number of second student: ";
	int fnum2;
	cin >> fnum2;
	
	cout << "Hello " << name << " and " << name2 << endl;
	
	int res = fnum + fnum2;

	cout << "Sum of faculty nums: " << res << endl;
	
	
	return 0;
}
