#include <iostream>

using namespace std;

void starRect(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			cout << "*";
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
	
	starRect(n, m);
	
	return 0;
}
