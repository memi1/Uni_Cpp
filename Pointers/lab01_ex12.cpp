#include <iostream>
#include <cassert>

using namespace std;

void readArr(int* ptr_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> (*(ptr_arr + i));
	}
}

void printArr(int* ptr_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << (*(ptr_arr + i)) << "  ";
	}
	cout << endl;
}

int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;
	
	assert (size > 0);
	
	int* ptr_arr = nullptr;
	ptr_arr = new int[size];
	
	readArr(ptr_arr, size);
	printArr(ptr_arr, size);
	
	if (ptr_arr)
	{
		delete[] ptr_arr;
		ptr_arr = nullptr;
		
	}
	
	cout << "Enter size2: ";
	int size2;
	cin >> size2;
	
	assert (size2 > 0);
	
	ptr_arr = new int[size2];
	readArr(ptr_arr, size2);
	printArr(ptr_arr, size2);
	
	if (ptr_arr)
	{
		delete[] ptr_arr;
		ptr_arr = nullptr;
	}
	
	return 0;
}
