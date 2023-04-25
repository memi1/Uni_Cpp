#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> *arr;
		arr++;
	}
}

void printArr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *arr << " ";
		arr++;
	}
	cout << endl;
}

double* max(double* arr, int size)
{
	double* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*max < *(arr + i))
		{
			*max = *(arr + i);
		}
	}
	return max;
}

int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;
	
	assert (size >= 1 && size < CPCT);
	
	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	cout << "Max element is: " << *(max(arr, size)) << endl;
	
	return 0;
}
