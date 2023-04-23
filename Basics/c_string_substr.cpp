#include <iostream>
#include <cassert> 

using namespace std;

const int CPCT = 256;

void substr(const char str[], char sub[], int start, int len)
{
	int i = 0;
	while (i < len)
	{
		sub[i] = str[start + i - 1];
		i++;
	}
	sub[i] = '\0';
}

int main()
{
	char str[CPCT];
	cout << "Enter C-string: ";
	cin >> str;
	
	cout << "Enter the start position for the substring: ";
	int start;
	cin >> start;
	
	cout << "Enter length for substring: ";
	int len;
	cin >> len;
	
	assert (start > 0 && start <= CPCT);
	assert (len > 0 && len <= CPCT);
	
	char sub[CPCT];
	substr(str, sub, start, len);
	
	cout << "Original string is: " << str << endl;
	cout << "Substring is: " << sub << endl;
	
	
	return 0;
}
