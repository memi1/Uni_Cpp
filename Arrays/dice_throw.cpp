#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int min = 1;
	int max = 6;
	int dice = min + rand() % (max - min + 1);
	
	cout << "Random dice throw: " << dice << endl;

	return 0;
}
