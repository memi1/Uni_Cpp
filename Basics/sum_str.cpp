#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int sumStr(string &str)
{
	int res = 0;
	for (int i = 0; i < str.length(); i++)
	{
		res += str[i];
	}
	return res;
}

inline void swap(string &a, string &b)
{
	string temp = a;
	a = b;
	b = temp;
}

inline void sort2(string &a, string &b)
{
	if (sumStr(a) > sumStr(b))
	{
		swap(a, b);
	}
}

inline void sort3(string &a, string &b, string &c)
{
	sort2(a, b);
	sort2(b, c);
	sort2(a, b);
}

int main()
{
	cout << "Enter first string: ";
	string a;
	getline(cin , a);
	
	cout << "Enter second string: ";
	string b;
	getline(cin, b);
	
	cout << "Enter third string: ";
	string c;
	getline(cin, c);
	
	int aa = sumStr(a);
	int bb = sumStr(b);
	int cc = sumStr(c);
	
	cout << "Sum of a: " << aa << setw(4) << " Sum of b: " << bb << setw(4) << " Sum of c: " << cc << endl;
	
	sort3(a, b, c);
	
	cout << "sorted strings: " << a << setw(10) << b << setw(10) << c << endl;
	
	return 0;
}
