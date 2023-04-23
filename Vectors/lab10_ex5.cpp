#include <iostream>
#include <vector>

using namespace std;

void readVec(vector<double> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": ";
		cin >> vec[i];
	}
}

void printVec(const vector<double> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": " << vec[i] << "  ";
	}
	cout << endl;
}

void minVec(const vector<double> &vec)
{
	double min = vec[0];
	
	for(int i = 0; i < vec.size(); i++)
	{
		if (min > vec[i])
		{
			min = vec[i];
		}
	}
	cout << "Min element in the vector is: " << min << endl;
}

void maxVec(const vector<double> &vec)
{
	double max = vec[0];
	
	for (int i = 0; i < vec.size(); i++)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}
	}
	cout << "Max element in the vector is: " << max << endl;
}

void sumVec(const vector<double> &vec)
{
	double sum = 0.0;
	
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}
	cout << "The sum of the elements in the vector is: " << sum << endl;
}

void avgVec(const vector<double> &vec)
{
	double sum = 0.0;
	
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}
	
	double avg = sum / vec.size();
	cout << "The avarage value of the elements in the vector is: " << avg << endl;
}

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	vector<double> vec(size);
	
	readVec(vec);
	printVec(vec);
	
	minVec(vec);
	maxVec(vec);
	
	sumVec(vec);
	avgVec(vec);
	
	return 0;
}
