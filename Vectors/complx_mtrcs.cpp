#include <iostream>
#include <vector>
#include <complex>

using namespace std;

void readVec(vector< vector< complex<int>>> &vec)
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

void printVec(const vector< vector< complex<int>>> &vec)
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

void sum(const vector< vector< complex<int>>> &vec, 
	const vector< vector< complex<int>>> &vec2, 
	vector< vector<complex<int>>> &add)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			add[i][j] = vec[i][j] + vec2[i][j];
		}
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
	
	vector< vector< complex<int>>> vec(rows, vector< complex<int>>(cols));
	
	readVec(vec);
	printVec(vec);
	
	cout << "Enter size for rows of second vector: ";
	int rows2;
	cin >> rows2;
	
	cout << "Enter size for columns of second vector: ";
	int cols2;
	cin >> cols2;
	
	vector< vector< complex<int>>> vec2(rows2, vector< complex<int>>(cols2));
	
	readVec(vec2);
	printVec(vec2);
	
	if (rows == rows2 && cols == cols2)
	{
		vector< vector< complex<int>>> add(rows, vector< complex<int>>(cols));
		cout << "Result of the sum of the two matrices: " << endl;
		sum(vec, vec2, add);
		printVec(add);
	}
	else
	{
		cout << "Rows and columns of first vector must be equal to rows and columns of second vector!" << endl;
	}
	
	return 0;
}
