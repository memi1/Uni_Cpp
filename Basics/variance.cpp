#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter number: ";
	int num;
	cin >> num;
	
	double fpnum;
	double mean;
	
	int br = 0;
	double sum;
	double dsum;
	
	double var;
	
	if (num > 0)
	{
		for (int i = 0; i < num; i++)
		{
			br++;
			cin >> fpnum;
			sum += fpnum;
			dsum += fpnum * fpnum;
		}
		cout << sum << endl;
		cout << dsum<< endl;
		var = (dsum - (sum * sum) / num) / (num - 1);
		mean = sum / br;
		
		cout << "The variance is: " << var << endl;
		cout << "The mean is: " << mean << endl;
	}
	return 0;
}
