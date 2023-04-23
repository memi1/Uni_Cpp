#include <iostream>
#include <vector>

using namespace std;

void readVec(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": ";
		cin >> vec[i];
	}
}

void printVec(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "  ";
	}
	cout << endl;
}

void swap(int &x, int &y)
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
		if (vec[min] > vec[i])
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
	
	vector<int> vec(size);
	
	readVec(vec);
	printVec(vec);

	selection(vec);
	printVec(vec);
	
	return 0;
}
