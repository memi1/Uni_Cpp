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

void merge(double arr[], int start, int mid, int end)
{
	int range = end- start + 1;
	double temp[CPCT];
	int fh = start;
	int sh = mid + 1;
	int pos = 0;
	
	while (fh <= mid && sh <= end)
	{
		if (arr[fh] < arr[sh])
		{
			temp[pos] = arr[fh];
			fh++;
		}
		else
		{
			temp[pos] = arr[sh];
			sh++;
		}
		pos++;
	}
	
	//remaining elements from first half
	while (fh <= mid)
	{
		temp[pos] = arr[fh];
		fh++;
		pos++;
	}
	
	//remaining elements from second half
	while (sh <= end)
	{
		temp[pos] = arr[sh];
		sh++;
		pos++;
	}
	
	//from temp array to original array
	for (pos = 0; pos < range; pos++)
	{
		arr[start + pos] = temp[pos];
	}
}

void sort(double arr[], int start, int end)
{
	if (start < end)
	{
		int mid = start + ((end - start) / 2);
		
		sort(arr, start, mid);
		sort(arr, mid + 1, end);
		
		merge(arr, start, mid, end);
	}
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
	
	sort(arr, 0, size - 1);
	printArr(arr, size);
	
	return 0;
}
