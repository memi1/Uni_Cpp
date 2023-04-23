#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter first string: ";
	string first;
	cin >> first;
	
	cout << "Enter second string: ";
	string second;
	cin >> second;
	
	cout << "Enter third string: ";
	string third;
	cin >> third;
	
	cout << "Enter fourth string: ";
	string fourth;
	cin >> fourth;
	
	string res = first + " " + second + " " + third + " " + fourth;
	
	cout << res << endl;
	return 0;
}
