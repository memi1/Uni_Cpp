#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

void roll(int num, int min, int max)
{
	num = min + rand() % (max - min + 1);
	cout << "Number is: " << num << endl;
}

int main()
{
	int num;
	
	int min = 1;
	int max = 6;
	
	srand(time(0));
	
	roll(num, min, max);
	
	return 0;
}
