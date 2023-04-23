#include <iostream>
#include <iomanip>

using namespace std;

int a;
int b;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;
	
	swap(a, b);
	cout << a << setw(4) << b << endl;
	
	return 0;
}
