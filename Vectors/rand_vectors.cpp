#include <iostream>
#include <vector>
#include <cstdlib>

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

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	vector<int> vec(size);
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	srand(time(0));
	
	randVec(vec, min, max);
	printVec(vec);

	return 0;
}
