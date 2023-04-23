#include <iostream>
#include <string>

using namespace std;
#define CHAR_TO_INT(s) (s - '0') 

int main()
{
	cout << "Enter string: ";
	string str;
	cin >> str;
	
	int numb = 0;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			cout << "String must be from '0' to '9'." << endl;
		}
		else
		{
			
	
			numb = ((CHAR_TO_INT(str[0]) * 10) + CHAR_TO_INT(str[1])) * 10 + CHAR_TO_INT(str[2]);
		}
	}
	
	cout << numb << endl;
	
	return 0;
}
