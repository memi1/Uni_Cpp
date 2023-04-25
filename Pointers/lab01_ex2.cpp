#include <iostream>

using namespace std;

int main()
{
	int a = 42;
	
	int* ptr = &a;
	
	cout << "Memory location: " << ptr << endl; 
	cout << "Value using the pointer: " << (*ptr) << endl; 
	
	*ptr = 0;
	
	cout << "Value using the pointer: " << (*ptr) << endl;
	cout << "Value using the variable: " << a << endl;

	int b = 33;
	ptr = &b;
	cout << ptr << "   " << (*ptr) << endl;


	return 0;
}
