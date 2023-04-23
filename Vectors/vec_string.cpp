#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVec(vector<string> &vec, string s)
{
	bool target = true;
	
	while (target)
	{
		cin >> s;
		if (s == "q")
		{
			target = false;
		}
		else
		{
			vec.push_back(s);
		}
	}
}

void printVec(const vector<string> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

int main()
{	

	vector<string> vec;
	string s;
	readVec(vec, s);
	printVec(vec);
	
	
	return 0;
}
