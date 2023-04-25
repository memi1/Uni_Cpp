#include <iostream>

using namespace std;

const int CPCT = 256;

void readArr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": ";
		cin >> *arr;
		arr++;
	}
}

void printArr(double* arr, int size)
{	
	for (int i = 0; i < size; i++)
	{
		cout << *arr << "  ";
		arr++;
	}
	cout << endl;
}

double avrg(double* arr, int size)
{
	double avg = 0.0;
	for (int i = 0; i < size; i++)
	{
		avg += *arr;
		arr++;
	}
	avg /= size;
	
	return avg;
}

int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;
	
	double arr[CPCT];
	
	readArr(arr, size);
	printArr(arr, size);
	
	cout << "The average of the array is: " << avrg(arr, size) << endl;
	
	return 0;
}
