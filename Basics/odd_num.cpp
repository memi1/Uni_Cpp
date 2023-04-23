#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	if (str.length() % 2)
	{
		cout << "Odd." << endl;
	}
	else
	{
		cout << "Even" << endl;
	}
	return 0;
}
