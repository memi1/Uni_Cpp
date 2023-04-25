#include <iostream>

using namespace std;

void foo1(int a)
{
	a = 0;
}

void foo2(int &a)
{
	a = 0;
}

void foo3(int* ptr)
{
	*ptr = 3;
}

int main()
{
	int x = 5;
	
	int y = 7;
	
	foo1(x);
	cout << x << endl;
	foo2(y);
	cout << y << endl;
	foo3(&y);
	cout << y << endl;
	
	
	return 0;
}
