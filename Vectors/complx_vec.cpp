#include <iostream>
#include <vector>
#include <complex>

using namespace std;

void readVec(vector< vector< complex<double>>> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << i << j << ": ";
			cin >> vec[i][j];
		}
	}
}

void printVec(const vector< vector< complex<double>>> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << i << j << ": " << vec[i][j] << "   ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter size for rows of vector: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns of vector: ";
	int cols;
	cin >> cols;
	
	vector< vector< complex<double>>> vec(rows, vector< complex<double>>(cols));
	
	readVec(vec);
	printVec(vec);	
	
	return 0;
}
