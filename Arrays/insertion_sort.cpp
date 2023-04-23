#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> arr[i];
	}
}

void printArr(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}

void insert(double arr[], int size, int x)
{
	int indx_pos = size - 1;
	while (indx_pos >= 0 && arr[indx_pos] > x)
	{
		arr[indx_pos + 1] = arr[indx_pos];
		indx_pos--; 
	}
	arr[indx_pos + 1] = x;
}

void sort(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		insert(arr, i, arr[i]);
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert(size > 0 && size <= CPCT);
	
	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	sort(arr, size);
	printArr(arr, size);
	
	return 0;
}
