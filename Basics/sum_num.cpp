#include <iostream>

using namespace std;

int main()
{
	int num;
	int sum;
	bool more = true;
	
	while (more)
	{
		cin >> num;
		if (cin.fail())
		{
			more = false;
		}
		else
		{
			sum += num;
		}
		
	}
	
	return 0;
}
