#include <iostream>
#include <cstdlib>
#include <cassert>

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

// counting how many times the values have been seen
void count(const int arr[], int size)
{
	int start = 0;
	while (start < size)
	{
		int br = 0;
		while (arr[start] == arr[start + br])
		{
			br++;
		}
		cout << arr[start] << " is seen " << br << " times. " << endl;
		start += br;
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	assert (size > 0 && size <= CPCT);
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	int arr[CPCT];
	
	srand(time(0));
	randArr(arr, size, min, max);
	printArr(arr, size);

	iSort(arr, size);
	printArr(arr, size);
	count(arr, size);
	
	return 0;
}
