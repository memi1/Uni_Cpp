#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(double arr[][CPCT], int rows, int cols)
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

void printArr(const double arr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << i << j << ": " << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter size for rows of array: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns of array: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	double arr[CPCT][CPCT];
	
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	return 0; 
}
