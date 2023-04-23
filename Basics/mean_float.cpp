#include <iostream>

using namespace std;

int main()
{
	double num;
	double mean;
	double sum;
	
	bool more = true;
	
	int br = 0;
	
	while (more)
	{
		cin >> num;
		br++;
		if (cin.fail())
		{
			more = false;
		}
		else
		{
			sum += num;
		}
	}
	mean = sum / br;
	cout << "The mean is: " << mean << endl;
}
