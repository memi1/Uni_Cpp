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

void sum(const int arr[][CPCT], const int arr2[][CPCT], int add[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			add[i][j] = arr[i][j] + arr2[i][j];
		}
	}
}

void substr(const int arr[][CPCT], const int arr2[][CPCT], int sub[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sub[i][j] = arr[i][j] - arr2[i][j];
		}
	}
}

void multiplication(const int arr[][CPCT], const int arr2[][CPCT], int mult[][CPCT], int rows, int cols, int cols2)
{
	for (int i = 0; i < rows; i++)
	{
		for (int m = 0; m < cols; m++)
		{
			for (int j = 0; j < cols2; j++)
			{
				mult[i][j] += arr[i][m] * arr2[m][j];
			}
		}
	}
}

int main()
{
	cout << "Enter size for rows of first matrix: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns of first matrix: ";
	int cols;
	cin >> cols;
	
	assert (rows > 0 && rows <= CPCT);
	assert (cols > 0 && cols <= CPCT);
	
	int arr[CPCT][CPCT];
	readArr(arr, rows, cols);
	printArr(arr, rows, cols);
	
	cout << "Enter size for rows of second matrix: ";
	int rows2;
	cin >> rows2;
	
	cout << "Enter size for columns of second matrix: ";
	int cols2;
	cin >> cols2;
	
	assert (rows2 > 0 && rows2 <= CPCT);
	assert (cols2 > 0 && cols2 <= CPCT);
	
	int arr2[CPCT][CPCT];
	readArr(arr2, rows2, cols2);
	printArr(arr2, rows2, cols2);
	
	// matrices with different size of rows and columns can't be added or substracted
	// if we have different sizes of rows and cols for the two arrays, we have to add condition in which we check that their sizes are equal
	if (rows == rows2 && cols == cols2)
	{
		int add[CPCT][CPCT];
		sum(arr, arr2, add, rows, cols);
		printArr(add, rows, cols);
	
		int sub[CPCT][CPCT];
		substr(arr, arr2, sub, rows, cols);
		printArr(sub, rows, cols);
	}
	else
	{
		cout << "Can't add or substract the matrices, different sizes of rows and columns. " << endl;
	}
	
	//for multiplication the size of columns of the first matrix should be equal to the size of the rows of the second matrix
	if (cols == rows2)
	{
		int mult[CPCT][CPCT];
		multiplication(arr, arr2, mult, rows, cols, cols2);
		printArr(mult, rows, cols2);
	}
	else
	{
		cout << "Columns of first matrix should be equal to the rows of the second matrix. " << endl;
	}
	return 0;
}
