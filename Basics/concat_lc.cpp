#include <iostream>
#include <string>

using namespace std;

int main()
{	
	cout << "Enter first string: ";
	string first;
	getline(cin, first);
	
	cout << "Enter second string: ";
	string second;
	getline(cin , second);
	
	cout << "Enter third string: ";
	string third;
	getline(cin, third);
	
	int len1 = first.length() - 1;
	int len2 = second.length() - 1;
	int len3 = third.length() -1;
	
	char c1 = first[len1];
	char c2 = second[len2];
	char c3 = third[len3];
	
	cout << c1 << c2 << c3 << endl;
	
	string res;
	res += c1;
	res += c2;
	res += c3;
	
	cout << res << endl;
	
	return 0;
}
