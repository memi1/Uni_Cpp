#include <iostream>

using namespace std;

int main()
{
	int primes[] = {2, 3, 7, 11, 13, 17};
	int size = sizeof(primes) / sizeof(int);
	
	for (int i = 0; i < size; i++)
	{
		cout << primes[i] << endl;
	}
	
	return 0;
}
