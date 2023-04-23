#include <iostream>

using namespace std;

void answer(char ch)
{
	switch(ch)
	{
		case 'Y':
			cout << "Yes." << endl;
			break;
		case 'y':
			cout << "Yes." << endl;
			break;
		case 'N':
			cout << "No." << endl;
			break;
		case 'n':
			cout << "No." << endl;
			break;
		default:
			cout << "Unknown answer." << endl;
	}
}

int main()
{

	cout << "Did you have a nice day? " << endl;
	char c;
	cin >> c;
	answer(c);
	
	cout << "Have you eaten? " << endl;
	char cc;
	cin >> cc;
	answer(cc);
	
	return 0;
}
