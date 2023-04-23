#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

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
			cout << i << j << ": " << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

void transpose(const int arr[][CPCT], int trsp[][CPCT], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			trsp[i][j] = arr[j][i];
		}
	}
}

int main()
{

	cout << "Enter size for rows of matrix: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns of matrix: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	int arr[CPCT][CPCT];
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	int trsp[CPCT][CPCT];
	transpose(arr, trsp, rows, cols);
	printArr(trsp, cols, rows);
	
	return 0;
}
