#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 100;

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
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

double det2(const double arr[][CPCT])
{
	return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
}

double det3(const double arr[][CPCT])
{
	double temp[CPCT][CPCT];
	double result = 0;
	
	temp[0][0] = arr[1][1];
	temp[0][1] = arr[1][2];
	temp[1][0] = arr[2][1];
	temp[1][1] = arr[2][2];
	
	result += arr[0][0] * det2(temp);
	
	temp[0][0] = arr[1][0];
	temp[0][1] = arr[1][2];
	temp[1][0] = arr[2][0];
	temp[1][1] = arr[2][2];
	
	result -= arr[0][1] * det2(temp);
	
	temp[0][0] = arr[1][0];
	temp[0][1] = arr[1][1];
	temp[1][0] = arr[2][0];
	temp[1][1] = arr[2][1];
	
	result += arr[0][2] * det2(temp);
	
	return result;
	
}

int main()
{
	cout << "Enter size for rows: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for cols: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	double arr[CPCT][CPCT];
	
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	if (rows == 3 && cols == 3)
	{
		cout << "Determinant of 3x3 matrix is: " << det3(arr) << endl;
	}

	
	return 0;
}
