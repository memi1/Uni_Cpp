#include <iostream>
#include <iomanip>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << b << endl;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << a << b << endl;
}

int main()
{
	cout << "Enter integer a: ";
	int a;
	cin >> a;
	
	cout << "Enter integer b: ";
	int b;
	cin >> b;
	
	swap(a, b);
	swap(a, b);
	
	cout << a << setw(4) << b << endl;
	
	return 0;
}
