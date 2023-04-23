#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void randVec(vector<int> &vec, int min, int max)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = min + rand() % (max - min + 1);
	}
}

void printVec(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": " << vec[i] << endl;
	}
}

// swaping two integers
inline void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

// min position
int minPos(const vector<int> &vec, int start)
{
	int min = start;
	for (int i = start; i < vec.size(); i++)
	{
		if (vec[i] < vec[min])
		{
			min = i;
		}
	}
	return min;
}

void selection(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		int min_pos = minPos(vec, i);
		if (min_pos != i)
		{
			swap(vec[min_pos], vec[i]);
		}
		
	}
}

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max; 
	cin >> max;
	
	vector<int> vec(size);
	
	randVec(vec, min, max);
	printVec(vec);
	
	selection(vec);
	printVec(vec);
	
	return 0;
}
