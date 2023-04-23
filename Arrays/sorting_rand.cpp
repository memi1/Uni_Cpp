#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

const int CPCT = 256;

void randArr(int arr[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArr(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}

void insertion(int arr[], int size, int x)
{
	int indx_pos = size - 1;
	while (indx_pos >= 0 && arr[indx_pos] > x)
	{
		arr[indx_pos + 1] = arr[indx_pos];
		indx_pos--;
	}
	arr[indx_pos + 1] = x;
}

void iSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		insertion(arr, i, arr[i]);
	}
}

inline void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int minPos(int arr[], int start, int size)
{
	int min = start;
	for (int i = start; i < size; i++)
	{
		if (arr[i] < arr[min])
		{
			min = i;
		}
	}
	return min;
}

void selection(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int min_pos = minPos(arr, i, size);
		if (min_pos != i)
		{
			swap(arr[min_pos], arr[i]);
		}
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= CPCT);
	
	int arr[CPCT];
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	srand(time(0));
	randArr(arr, size, min, max);
	printArr(arr,size);
	
	iSort(arr, size);
	printArr(arr,size);
	
	selection(arr, size);
	printArr(arr, size);
	
	return 0;
}
