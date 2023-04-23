#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

inline void swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}

void scramble(string &word)
{
	int len = word.length();
	int r = 1 + rand() % len;
	cout << r << endl;
	for (int i = 0; i < len; i++)
	{
		if (word[i] == word[0] || word[i] == word[len - 1])
		{
			cout << "Random flip of characters between the first and last character." << endl;
		}
		else
		{
			swap(word[i], word[r]);
		}
	}
}

int main()
{
	cout << "Enter string: ";
	string word;
	getline(cin, word);
	
	srand(time(0));
	scramble(word);
	
	cout << word << endl;
	
	return 0;
}
