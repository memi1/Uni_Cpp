#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;
	double data[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter data[" << i << "] ";
		cin >> data[i];
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	
	return 0;
}
