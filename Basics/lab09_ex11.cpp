#include <iostream>
#include <cstdlib>

using namespace std;

void binRect(int n, int m, int min, int max)
{
	
	
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			int el = min + rand() % (max - min + 1);
			cout << el;
		}
		cout << endl;
	}
}

int main()
{	
	cout << "Enter value for n: ";
	int n;
	cin >> n;
	
	cout << "Enter value for m: ";
	int m;
	cin >> m;
	
	int min = 0;
	int max = 1;
	
	srand(time(0));
	
	binRect(n, m, min, max);
	
	return 0;
}
