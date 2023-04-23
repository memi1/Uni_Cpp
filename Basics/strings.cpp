#include <iostream>
#include <string>

using namespace std;

void swap(string &str, int len)
{
	char temp = str[0];
	str[0] = str[len];
	str[len] = temp;
}

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	int len = str.length() - 1;
	swap(str, len);
	
	cout << str << endl;
	
	cout << "Enter string2: ";
	string str2;
	getline(cin, str2);
	
	int mid = str2.length() / 2;
	
	string strfh = str2.substr(0, mid);
	string strsh = str2.substr(mid);
	string res = strsh.append(strfh);
	
	cout << "Original string: " << str2 << " new swapped halfs string is: " << res << endl;
	
	return 0;
}
