#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> *(arr + i);
	}
}

void printArr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

void minMax(double* arr, int size, double* ptr_min, double* ptr_max)
{
	*ptr_min = *arr;
	*ptr_max = *arr;
	
	for (int i = 1; i < size; i++)
	{
		if (*(arr + i) < *ptr_min)
		{
			*ptr_min = *(arr + i);
		}
		if (*(arr + i) > *ptr_max)
		{
			*ptr_max = *(arr + i);
		}
	}
	
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	double min;
	double max;
	minMax(arr, size, &min, &max);
	
	cout << "Min in array is: " << min << endl;
	cout << "Max in array is: " << max << endl;
	
	return 0;
}
