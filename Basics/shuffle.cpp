#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

inline void swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}

void shuffle(string &str)
{
	int len = str.length();
	int r = 1 + rand() % len;
	
	for (int i = 0; i < len; i++)
	{
		swap(str[i], str[r]);
	}
}

int main()
{
	cout << "Enter string: ";
	string str;
	getline(cin, str);
	
	srand(time(0));
	shuffle(str);
	
	cout << str << endl;
	
	return 0;
}
