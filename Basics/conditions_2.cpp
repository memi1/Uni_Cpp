#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	if (sin(1) == tan(1) * cos(1))
	{
		cout << "Equal." << endl;
	}
	else
	{
		cout << "sin(1) is: " << sin(1) << endl;
		cout << "tan(1) * cos(1) is: " << setprecision(18) << tan(1) * cos(1) << endl;
	}
	return 0;
}
