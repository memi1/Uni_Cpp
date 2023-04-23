#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter first string: ";
	string one;
	getline(cin, one);
	
	int len = one.length();
	
	swap(one[0], one[len - 1]);
	
	cout << one << endl;
	
	return 0;
}
