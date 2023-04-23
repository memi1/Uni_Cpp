#include <iostream> 
#include <iomanip>

using namespace std;

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "Enter a: ";
	int a;
	cin >> a;
	
	cout << "Enter b: ";
	int b;
	cin >> b;
	
	cout << "Enter c: ";
	int c;
	cin >> c;
	
	cout << "Enter d: ";
	int d;
	cin >> d;
	
	swap1(a, b);
	swap2(c, d);
		
	cout << a << setw(4) << b << setw(4) << c << setw(4) << d << endl;
	
	return 0;
}
