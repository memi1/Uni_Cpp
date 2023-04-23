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

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	cout << "Enter minimum boudry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	int arr[CPCT];
	
	assert (size > 0 && size <= CPCT);
	srand(time(0));
	
	randArr(arr, size, min, max);
	printArr(arr, size);

	return 0;
}
