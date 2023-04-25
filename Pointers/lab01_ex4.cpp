#include <iostream>

using namespace std;

int* foo()
{
	int bar =  4;
	
	int* p = &bar;
	
	return p;
}

int main()
{

	int* ptr = foo();
	
	cout << ptr << endl;
	
	return 0;
}
