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

int det2(const int arr[][CPCT])
{
	int det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	
	return det;
}

int det3(const int arr[][CPCT])
{	
	int det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
	
	return det;
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
	
	int arr[CPCT][CPCT];
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	if (rows == 2 && cols == 2)
	{
		cout << "The determinant of 2x2 matrix is: " << det2(arr) << endl;
	}
	
	if (rows == 3 && cols == 3)
	{
		cout << "The determinant of 3x3 matrix is: " << det3(arr) << endl;
	}
	
	return 0;
}
