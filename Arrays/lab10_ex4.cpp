#include <iostream>
#include <cassert> 

using namespace std;

const int SIZE = 100;

void readArr(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter data[" << i << "] ";
		cin >> arr[i];
	}
}

void printArr(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << "  ";
	}
	cout << endl;
}

void minArr(const double arr[], int size)
{
	double min = arr[0];
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min element in the array is: " << min << endl;
}

void maxArr(const double arr[], int size)
{
	double max = arr[0];
	
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Max element in the array is: " << max << endl;
}

void sumArr(const double arr[], int size)
{
	double sum = 0.0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "The sum of the elements in the array is: " << sum << endl;
}

void avgArr(const double arr[], int size)
{
	double sum = 0.0;
	int br = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		br++;
	}
	double avg = sum / br;
	cout << "The avarage value of the array is: " << avg << endl;
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= SIZE);
	
	double arr[SIZE];
	
	readArr(arr, size);
	printArr(arr, size);
	
	minArr(arr, size);
	maxArr(arr, size);
	
	sumArr(arr, size);
	avgArr(arr, size);
	
	return 0;
}
