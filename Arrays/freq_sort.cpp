#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

const int CPCT = 256;
const int HST = 100;

void readArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		do
		{
			cin >> arr[i];
		}
		while (arr[i] < 0 || arr[i] >= 100);
	}
	
}

void printArr(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << "     ";
	}
	cout << endl;
}

void freqCount(const int arr[], int hist[], int size)
{
	for (int i = 0; i < size; i++)
	{
		hist[arr[i]]++;
	}
}

void freqSort(int arr[], const int hist[])
{
	int k = 0;
	for (int i = 0; i < HST; i++)
	{
		for (int j = 0; j < hist[i]; j++)
		{
			arr[k] = i;
			k++;
		}	
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= CPCT);
	
	int arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	int hist[HST] = {0};
	freqCount(arr, hist, size);
	printArr(hist, HST);
	freqSort(arr, hist);
	printArr(arr, size);
	
	
	return 0;
}
