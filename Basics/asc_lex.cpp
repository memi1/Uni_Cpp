#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	cout << "Enter string: ";
	string str2;
	getline(cin, str2);
	
	if (str < str2)
	{
		cout << str << " " << str2 << endl;
	}
	else 
	{
		cout << str2 << " " << str << endl;
	}
	return 0;
}
