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
			cout << i << " " << j << ": ";
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

int main()
{
	cout << "Enter rows for array: ";
	int rows;
	cin >> rows;
	
	cout << "Enter cols for array: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	int arr[CPCT][CPCT];
	
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	return 0;
}
