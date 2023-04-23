#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	cout << "Enter the string you'll be looking for: ";
	string search;
	getline(cin, search);
	
	int pos = str.find(search);
	
	cout << pos << endl;
	
	return 0;
}
