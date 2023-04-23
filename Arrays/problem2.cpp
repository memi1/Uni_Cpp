#include <iostream>
#include <cassert>

using namespace std;

const int CPCT = 256;

void readArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> arr[i];
	}
}

bool isPrime(int num)
{
	bool prime = true;
	
	if (num == 0 || num == 1)
	{
		prime = false;
	}
	
	for (int i = 2; i <= num/2; i++)
	{
		if (!(num % i))
		{
			prime = false;
			break;
		}
	}
	
	return prime;
}

void printArr(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (isPrime(arr[i]))
		{
			cout << arr[i] << endl;
		}
	}
}

int main()
{
	cout << "Enter size for array: ";
	int size;
	cin >> size;
	assert(size > 0 && size <= CPCT);
	
	int arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	
	
	return 0;
}
