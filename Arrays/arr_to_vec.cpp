#include <iostream>
#include <cstdlib>
#include <cassert>
#include <vector>

using namespace std;

const int CPCT = 256;

void randArr(double arr[], int size, double min, double max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (max - min) + min;
	}
}

void printArr(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}

void toVec(vector<double> &vec, const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		vec.push_back(arr[i]);
	}
}

void printVec(const vector<double> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": " << vec[i] << endl;
	}
}

int main()
{
	cout << "Enter size of array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= CPCT);
	
	double arr[CPCT];
	
	double min = 1.0;
	double max = 2.0;
	
	srand(time(0));
	
	randArr(arr, size, min, max);
	printArr(arr, size);
	
	vector<double> vec;
	toVec(vec, arr, size);
	printVec(vec);
	
	return 0;
}
