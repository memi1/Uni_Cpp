#include <iostream>
#include <cstdlib>

using namespace std;

#define ABS(n) (n < 0 ? -n : n)

int main()
{
	cout << "Enter character: ";
	char ch;
	cin >> ch;
	cout << "Numeric value of the character " << ch << " is " << (int)ch << endl;
	
	
	cout << "Enter integer: ";
	int offset;
	cin >> offset;
	
	cout << ch << " + " << offset << " is " << (char)(ch + offset) << endl;
	
	
	cout << "Enter first char: ";
	char first;
	cin >> first;
	
	cout << "Enter second char: ";
	char second;
	cin >> second;
	
	char res = second - first;
	
	cout << "absolute value of the difference of the two characterrs is: " << ABS(res) << endl;
	
	
	return 0;
}
