#include <iostream>
#include <string>
#include <cassert>

using namespace std;

inline int readMax()
{
	cout << "Enter max size: ";
	int size;
	cin >> size;
	
	assert (size > 1);
	
	return size;
}

string randString(int max_size = 10)
{
	int size = 1 + rand() % max_size;
	string res;
	int i = 0;
	
	while (i < size)
	{
		res.psuh_back(randSmallLatin());
		i++;
	}
	return res;
}

int main()
{
	cout << "Enter integer: ";
	int num;
	cin >> num;
	
	
	return 0;
}
