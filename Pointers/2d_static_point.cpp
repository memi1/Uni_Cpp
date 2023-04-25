#include <iostream>

using namespace std;

const int CPCT = 256;

void read(int arr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> *(*(arr + i) + j);
		}
	}
}

void print(int arr[][CPCT], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr + i) + j) << endl;
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
	
	int arr[CPCT][CPCT];
	
	read(arr, rows, cols);
	print(arr, rows, cols);

	return 0;
}
