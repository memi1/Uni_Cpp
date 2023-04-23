#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

void readVec(vector< vector<double> > &vec)
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

void printVec(const vector< vector<double> > &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
}

inline double det(const vector< vector<double> > &vec)
{
	assert (vec.size() == 2 && vec[0].size() == 2);
	
	return vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0];
	
}

double det3(const vector< vector<double> > &vec)
{
	assert (vec.size() == 3 && vec[0].size() == 3);
	
	vector< vector<double> > temp(vec.size() - 1, vector<double>(vec[0].size() - 1));
	double res = 0.0;
	
	temp[0][0] = vec[1][1];
	temp[0][1] = vec[1][2];
	temp[1][0] = vec[2][1];
	temp[1][1] = vec[2][2];
	
	res += vec[0][0] * det(temp);
	
	temp[0][0] = vec[1][0];
	temp[0][1] = vec[1][2];
	temp[1][0] = vec[2][0];
	temp[1][1] = vec[2][2];
	
	res -= vec[0][1] * det(temp);
	
	temp[0][0] = vec[1][0];
	temp[0][1] = vec[1][1];
	temp[1][0] = vec[2][0];
	temp[1][1] = vec[2][1];
	
	res += vec[0][2] * det(temp);
	
	return res;
}

int main()
{
	cout << "Enter size for rows: ";
	int rows;
	cin >> rows;
	
	cout << "Enter size for columns: ";
	int cols;
	cin >> cols;
	
	vector< vector<double>> vec(rows, vector<double>(cols));
	
	readVec(vec);
	printVec(vec);
	
	cout << "Determinant 3x3 is: " << det3(vec) << endl;
	
	return 0;
}
