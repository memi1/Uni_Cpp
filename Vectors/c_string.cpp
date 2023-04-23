#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readCstr(char str[], int size)
{
	cout << "Enter C-string: ";
	cin >> str;
}

void printCstr(const char str[], int size)
{
	cout << str << endl;
}

int main()
{
	char str[CPCT];
	
	readCstr(str, size);
	printCstr(str, size);
	
	return 0;
}
