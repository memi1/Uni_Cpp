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

bool linSearch(int arr[], int size, int k)
{
	bool found = false;
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == k)
		{
			found = true;
			break;
		}
	}
	return found;
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
	
	cout << "Enter value for search: ";
	int k;
	cin >> k;
	
	bool res = linSearch(arr, size, k);
	if (res == 1)
	{
		cout << "K is found in array." << endl;
	}
	else
	{
		cout << "K isn't found in array." << endl;
	}
	
	
	return 0;
}
