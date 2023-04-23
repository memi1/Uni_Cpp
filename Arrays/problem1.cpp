#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> arr[i];
	}
}

void printArr(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	assert(size > 0 && size <= CPCT);
	
	int arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	return 0;
}
