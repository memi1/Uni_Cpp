#include <iostream>
#include <vector>

using namespace std;

void readVec(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": ";
		cin >> vec[i];
	}
}

void printVec(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "  ";
	}
	cout << endl;
}

void scalarProd(const vector<int> &x, const vector<int> &y)
{
	int prod = 0;
	
	for (int i = 0; i < x.size(); i++)
	{
		prod += x[i] * y[i];
	}
	cout << "The scalar product of the two vectors is: " << prod << endl;
}

int main()
{	
	cout << "Enter size for vectors: ";
	int size;
	cin >> size;
	
	vector<int> x(size);
	
	vector<int> y(size);
	
	readVec(x);
	printVec(x);	
	
	readVec(y);
	printVec(y);
	
	scalarProd(x, y);
	
	return 0;
}
