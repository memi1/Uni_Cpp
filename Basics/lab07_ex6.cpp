#include <iostream>
#include <string>

using namespace std;

char toUpp(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
	}
	return c;
}

void printUpp(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		cout << toUpp(str[i]) << endl;
	}
}

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	printUpp(str);
	
	return 0;
}
