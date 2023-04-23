#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printChars(const string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << setw(5) << int(str[i]) << endl;
	}
}

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	printChars(str);
	
	return 0;
}
