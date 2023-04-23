#include <iostream>

using namespace std;

void category(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		cout << "The character is Uppercase." << endl;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		cout << "The character is lowercase." << endl;
	}
	else if (ch >= '0' && ch <= '9')
	{
		cout << "The character is a number." << endl;
	}
	else
	{
		cout << "The character is something else." << endl;
	}
}

int main()
{
	cout << "Enter char: ";
	char ch;
	cin >> ch;
	
	category(ch);
	
	return 0;
}
