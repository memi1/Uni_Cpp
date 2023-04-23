#include <iostream>
#include <iomanip>

using namespace std;

inline void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

inline void sort2(int &a, int &b)
{
	if (a > b)
	{
		swap(a, b);
	}
}

inline void sort3(int &a, int &b, int &c)
{	
	sort2(a, b);
	sort2(b, c);
	sort2(a, b);
}

int main()
{
	cout << "Enter first integer: ";
	int a;
	cin >> a;
	
	cout << "Enter second integer: ";
	int b;
	cin >> b;
	
	cout << "Enter third integer: ";
	int c;
	cin >> c;
	
	sort3(a, b, c);
	cout << a << setw(4) << b << setw(4) << c << endl;
	return 0;
}
