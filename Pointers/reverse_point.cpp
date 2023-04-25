#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> *arr;
		arr++;
	}
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *arr << " ";
		arr++;
	}
	cout << endl;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(int arr[], int size)
{
	int* start = arr;
	int* end = arr + size - 1;
	while (start < end)
	{
		swap(start, end);
		start++;
		end--;
	}
	
}

int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;
	
	assert (size >= 1 && size < CPCT);
	
	int arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	reverse(arr, size);
	printArr(arr, size);
	
	return 0;
}
