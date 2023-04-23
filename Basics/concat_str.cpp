#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter first string: ";
	string str;
	getline(cin, str);
	
	cout << "Enter second string: ";
	string str2;
	getline(cin, str2);
	
	int len1 = str.length() / 2;
	int len2 = str.length() / 2;

	string res;
	
	for (int i = 0; i < len1; i++)
	{
		res += str[i];
		
	}	
	
	for (int i = 0; i < len2; i++)
	{
		res += str2[i];
	}
	
	cout << res << endl;
	return 0;
}
