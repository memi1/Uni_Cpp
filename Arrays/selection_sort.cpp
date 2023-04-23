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

//swaping two floating-point numbers
inline void swap(double &x, double &y)
{
	double temp = x;
	x = y;
	y = temp;
}

//min position
int minPos(double arr[], int start, int size)
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

void selection(double arr[], int size)
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
	
	assert (size >  0 && size <= CPCT);
	
	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);

	selection(arr, size);
	printArr(arr, size);

	return 0;
}
