#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>

using namespace std;

const int CPCT = 256;

void randArr(double arr[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = ((double)rand() / RAND_MAX) * (max - min) + min;
	}
}

void printArr(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}

inline void swap(double &x, double &y)
{
	double temp = x;
	x = y;
	y = temp;
}

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

void merge(double arr[], int start, int mid, int end)
{
	int range = end - start + 1;
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
	
	//remaining elments in first half
	while (fh <= mid)
	{
		temp[pos] = arr[fh];
		fh++;
		pos++;
	}
	
	//remaining elements in second half
	while (sh <= end)
	{
		temp[pos] = arr[sh];
		sh++;
		pos++;
	}
	
	// from temp array to original array
	for (pos = 0; pos < range; pos++)
	{
		arr[start + pos] = temp[pos];
	}
}

void mSort(double arr[], int start, int end)
{
	if (start < end)
	{
		int mid = start + ((end - start) / 2);
		
		mSort(arr, start, mid);
		mSort(arr, mid + 1, end);
		
		merge(arr, start, mid, end);
	}
}

void insertion(double arr[], int size, double x)
{
	int indx_pos = size - 1;
	while (indx_pos >= 0 && arr[indx_pos] > x)
	{
		arr[indx_pos + 1] = arr[indx_pos];
		indx_pos--;
	}
	arr[indx_pos + 1] = x;
}

void iSort(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		insertion(arr, i, arr[i]);
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= CPCT);
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;

	srand(time(0));
	
	double arr[CPCT];
	
	randArr(arr, size, min, max);
	printArr(arr, size);
	
	time_t before = time(0);
	selection(arr, size);
	time_t after = time(0);
	printArr(arr, size);
	
	time_t beforeM = time(0);
	mSort(arr, 0, size -1);
	time_t afterM = time(0);
	printArr(arr, size);
	
	time_t beforeI = time(0);
	iSort(arr, size);
	time_t afterI = time(0);
	printArr(arr, size);
	
	double duration = difftime(before, after);
	cout << "Elapsed time selection sort = " << duration << " seconds. \n";
	
	double durationM = difftime(beforeM, afterM);
	cout << "Elapsed time merge sort = " << durationM << " seconds. \n";
	
	double durationI = difftime(beforeI, afterI);
	cout << "Elapsed time insertion sort = " << durationI << " seconds. \n";
	
	return 0;
}
