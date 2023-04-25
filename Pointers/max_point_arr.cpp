#include <iostream>

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

int max(int* arr, int size)
{
	int max = *arr;
	for (int i = 0; i < size; i++)
	{
		if (max < *arr)
		{
			max = *arr;
		}
		arr++;
	}
	return max;
}

int max2(int* arr, int size)
{
	if (size == 0)
	{
		return 0;
	}
	int max = *arr;
	while (--size > 0)
	{
		if (*++arr > max)
		{
			max = *arr;
		}
	}
	return max;
}

int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;

	int arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	cout << "Max element is: " << max(arr, size) << endl;
	cout << "Max element is: " << max2(arr, size) << endl;
	
	return 0;
}
