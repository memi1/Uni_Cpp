#include <iostream>

using namespace std;

void checkChar(char ch)
{
	if (ch >= '0' && ch <= '9' || ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		cout << "The character shouldn't be decimal or latin letter." << endl;
	}
	else
	{
		cout << "The char is: " << ch << endl;
	}
}

int main()
{
	cout << "Enter char: ";
	char ch;
	cin >> ch;
	
	checkChar(ch);
	
	return 0;
}
