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

void insertion(vector<int> &vec, int size, int x)
{
	int indx_pos = size - 1;
	while (indx_pos >= 0 && vec[indx_pos] > x)
	{
		vec[indx_pos + 1] = vec[indx_pos];
		indx_pos--;
	}
	vec[indx_pos + 1] = x;
}

void iSort(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		insertion(vec, i, vec[i]);
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
	
	srand(time(0));
	
	vector<int> vec(size);
	
	randVec(vec, min, max);
	printVec(vec);
	
	iSort(vec);
	printVec(vec);
	
	return 0;
}
