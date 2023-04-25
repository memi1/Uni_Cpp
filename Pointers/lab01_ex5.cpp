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
		cout << *(arr + i) << "  ";
	}
	cout << endl;
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	assert (size > 0 && size <= CPCT);

	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	return 0;
}
