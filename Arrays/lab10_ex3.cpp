#include <iostream>
#include <cassert>

using namespace std;

const int SIZE = 100; 

void readArr(double data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter data[" << i << "] ";
		cin >> data[i];
	}
}

void printArr(double data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << "  ";
	}
	cout << endl;
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	
	assert (size > 0 && size <= SIZE);
	
	double data[SIZE];
	
	readArr(data, size);
	printArr(data, size);
	
	return 0;
}
