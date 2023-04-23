#include <iostream>

using namespace std;

int menu()
{
	cout << "1: New single player game" << endl;
	cout << "2: New multi-player game" << endl;
	cout << "3: Load saved game" << endl;
	cout << "4: Exit" << endl;
	
	int input;
	cin >> input;
	
	switch (input)
	{
		case 1:
			cout << "Starting new single player game." << endl;
			break;
		case 2:
			cout << "Starting new multi-player game." << endl;
			break;
		case 3:
			cout << "Loading saved game." << endl;
			break;
		case 4:
			cout << "Exit game." << endl;
			break;
		default:
			cout << "Unknown code." << endl;
			input = 0;
	}
	
	return input;
}

int main()
{
	menu();
	
	return 0;
}
