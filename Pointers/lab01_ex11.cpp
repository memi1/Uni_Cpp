#include <iostream>
#include <cassert>

using namespace std;

void readArr(int** ptr_arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << i << j << ": ";
			//cin >> (*(*ptr_arr + i + j));
			cin >> *(*(ptr_arr + i) + j);
		}
	}
}

void printArr(int** ptr_arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << (*(*(ptr_arr + i) + j)) << "  ";   // same as arr[i][j]
			//cout << *(*(ptr_arr + i) + j) << "  "; // the same as arr[i][j]
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter rows: ";
	int rows;
	cin >> rows;
	
	cout << "Enter cols: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0);
	assert (cols > 0);
	
	int** ptr_arr = nullptr;
	
	ptr_arr = new int*[rows];
	
	for (int i = 0; i < rows; i++)
	{
		ptr_arr[i] = new int [cols];
	}	
	
	readArr(ptr_arr, rows, cols);
	printArr(ptr_arr, rows, cols);
	
	if (ptr_arr)
	{
		for (int i = 0; i < rows; i++)
		{
			if (ptr_arr[i])
			{
				delete[] ptr_arr[i];
				ptr_arr[i] = nullptr;
			}
		}
		delete[] ptr_arr;
		ptr_arr = nullptr;
	}
	
	return 0;
}
