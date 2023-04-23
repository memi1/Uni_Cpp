#include <iostream>
#include <cstdlib>
#include <cassert>
#include <vector>

using namespace std;

const int MX = 255;

void randVec(vector< vector<int>> &vec, int min, int max)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			vec[i][j] = min + rand() % (max - min + 1);
		}
	}
}

void printVec(const vector< vector<int>> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << i << j << ": " << vec[i][j] << "   ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter size for rows of vector: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns of vector: ";
	int cols;
	cin >> cols;
	
	cout << "Enter minimum boundry >= 0: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry <= 255: ";
	int max;
	cin >> max;
	
	assert (min >= 0 && min <= MX);
	assert (max >= 0 && max <= MX);
	
	vector< vector<int>> vec(rows, vector<int>(cols));
	
	srand(time(0));
	randVec(vec, min, max);
	printVec(vec);
	 
	return 0;
}
