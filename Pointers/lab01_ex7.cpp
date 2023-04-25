#include <iostream>

using namespace std;

const int CPCT = 256;

int strsize(char* ptr_str)
{
	int res = 0;
	while (*(ptr_str++) && ++res < CPCT);
	
	return res;
}

int main()
{
	char str[CPCT];
	cout << "Enter c-string: ";
	cin >> str;
	
	cout << "String: " << str << endl;
	
	cout << "Size of c-string is: " << strsize(str) << endl;;
	
	return 0;
}
