#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter husband's name: ";
	string hname;
	getline(cin, hname);
	
	cout << "Enter wife's name: ";
	string wname;
	getline(cin, wname);
	
	int pos = hname.find(' ');
	string lname = hname.substr(pos + 1);
	
	wname.append("-");
	wname.append(lname);
	cout << "Name: " << wname << endl;
	
	return 0;
}
