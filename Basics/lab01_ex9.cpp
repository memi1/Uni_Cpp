#include <iostream>

using namespace std;

const int CPCT = 256;

int strlen(const char str[])
{
	int res = 0;
	
	while (str[res++]);
	
	return res;
}

int strcpy(char dest[], const char source[])
{
	int i;
	for (i = 0; source[i] && i < CPCT; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	
	return i;
}

int main()
{
	char str[CPCT];
	
	cin >> str;
	
	char dest[CPCT];
	
	cout << "Size of c-string: " << strlen(str) << endl;
	cout << strcpy(dest, str) << endl;

	return 0;
}
