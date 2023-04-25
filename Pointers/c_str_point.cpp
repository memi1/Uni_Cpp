#include <iostream>

using namespace std;

const int CPCT = 256;

int strlen(char* str)
{
	int br = 0;
	while (*str != '\0')
	{
		br++;
		str++;
	}
	
	return br;
}

void strconcat(char* str1, char* str2, char* res)
{
	while (*str1)
	{
		*res = *str1;
		str1++;
		res++;
	}
	while (*str2)
	{
		*res = *str2;
		str2++;
		res++;
	}
	*res = '\0';
	
}

int main()
{
	cout << "Enter string: ";
	char str[CPCT];
	
	cin >> str;
	
	cout << "Length of c-string: " << strlen(str) << endl;
	
	cout << "Enter 2nd string: ";
	char str2[CPCT];
	
	cin >> str2;
	
	char res[CPCT];
	strconcat(str, str2, res);
	cout << "Concatenated strings: " << res << endl;
	
	return 0;
}
