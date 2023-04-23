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
		cout << i << ": " << vec[i] << endl;
	}
}

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	vector<double> vec(size);
	
	readVec(vec);
	printVec(vec);

	return 0;
}
