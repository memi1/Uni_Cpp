#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 200;

void readArr(int arr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << i << j << ": ";
			cin >> arr[i][j];
		}
	}
}

void printArr(const int arr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void multTable(int arr2[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[i][j] = (i + 1) * (j + 1);
		}
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
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	int arr[CPCT][CPCT];
	
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	int arr2[CPCT][CPCT];
	
	multTable(arr2, rows, cols);
	printArr(arr2, rows, cols);
	
	
	return 0;
}
