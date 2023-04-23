#include <iostream>
#include <string>

using namespace std;

int strToint(const string &str, int rad = 10)
{
	int res = 0;
	for (int i = 0; i < str.length(); i++)
	{
		res *= rad;
		res += str[i] - '0';
	}
	return res;
}

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	
	cout << strToint(str);
	
	return 0;
}
