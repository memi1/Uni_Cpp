#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readMatr(int matr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << i << j << ": ";
			cin >> matr[i][j];
		}
	}
}

void printMatr(const int matr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matr[i][j] << "  ";
		}
		cout << endl;
	}
}

void addition(const int matr[][CPCT], const int matr2[][CPCT], int add[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			add[i][j] = matr[i][j] + matr2[i][j];
		}
	}
}

void substraction(const int matr[][CPCT], const int matr2[][CPCT], int sub[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sub[i][j] = matr[i][j] - matr2[i][j];
		}
	}
}

void multiplication(const int matr[][CPCT], const int matr2[][CPCT], int mult[][CPCT], int rows, int cols, int rows2, int cols2)
{
	assert (cols == rows2);
	for (int i = 0; i < rows; i++)
	{
		for (int m = 0; m < cols; m++)
		{
			for (int j = 0; j < cols2; j++)
			{
				mult[i][j] += matr[i][m] * matr2[m][j];
			}
		}
	}
}

int main()
{
	cout << "Enter rows for first matrix: ";
	int rows1;
	cin >> rows1;
	
	cout << "Enter cols for first matrix: ";
	int cols1;
	cin >> cols1;
	
	cout << "Enter rows for second matrix: ";
	int rows2;
	cin >> rows2;
	
	cout << "Enter cols for second matrix: ";
	int cols2;
	cin >> cols2;
	
	int matr1[CPCT][CPCT];
	int matr2[CPCT][CPCT];
	
	readMatr(matr1, rows1, cols1);
	printMatr(matr1,rows1, cols1);
	
	readMatr(matr2, rows2, cols2);
	printMatr(matr2, rows2, cols2);
	
	int add[CPCT][CPCT];
	int sub[CPCT][CPCT];
	int mult[CPCT][CPCT];
	
	if (rows1 == rows2 && cols1 == cols2)
	{
		addition(matr1, matr2, add, rows1, cols1);
		substraction(matr1, matr2, sub, rows1, cols1);
		printMatr(add, rows1, cols1);
		printMatr(sub, rows1, cols1);
	}
	
	multiplication(matr1, matr2, mult, rows1, cols1, rows2, cols2);
	printMatr(mult, rows1, cols2);
	
	return 0;
}
