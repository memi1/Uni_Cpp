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

int main()
{
	srand(time(0));
	
	int size = 1 + rand() % (CPCT);
	
	assert (size > 0 && size <= 256);
	
	int arr[CPCT];
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	randArr(arr, size, min, max);
	printArr(arr, size);
	
	return 0;
}
