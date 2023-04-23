#include <iostream>
#include <vector>

using namespace std;

void readVec(vector< vector<double>> &vec)
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

void printVec(const vector< vector<double>> &vec)
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
	cout << "Enter size for rows of vector:";
	int rows;
	cin >> rows;
	
	cout << "Enter size columns of vector: ";
	int cols;
	cin >> cols;
	
	vector< vector<double>> vec(rows, vector<double>(cols));
	
	readVec(vec);
	printVec(vec);
	
	return 0;
}
