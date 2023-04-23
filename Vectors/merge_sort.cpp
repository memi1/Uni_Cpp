#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void randVec(vector<int> &vec, int min, int max)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = min + rand() % (max - min + 1);
	}
}

void printVec(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": " << vec[i] << endl;
	}
}

void merge(vector<int> &vec, int start, int mid, int end)
{
	int range = end - start + 1;
	vector<int> temp(vec.size());
	int fh = start;
	int sh = mid + 1;
	int pos = 0;
	
	while (fh <= mid && sh <= end)
	{
		if (vec[fh] < vec[sh])
		{
			temp[pos] = vec[fh];
			fh++;
		}
		else
		{
			temp[pos] = vec[sh];
			sh++;
		}
		pos++;
	}
	
	// remaining elements from first half
	while (fh <= mid)
	{
		temp[pos] = vec[fh];
		fh++;
		pos++;
	}
	
	//remaining elements from second half
	while (sh <= end)
	{
		temp[pos] = vec[sh];
		sh++;
		pos++;
	}
	
	// copying values from temp to original vector
	for (pos = 0; pos < range; pos++)
	{
		vec[start + pos] = temp[pos];
	} 
}

void mSort(vector<int> &vec, int start, int end)
{
	if (start < end)
	{
		int mid = start + ((end - start) / 2);
		
		mSort(vec, start, mid);
		mSort(vec, mid + 1, end);
		
		merge(vec, start, mid, end);
	}
}

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	cout << "Enter minimum boundry: ";
	int min;
	cin >> min;
	
	cout << "Enter maximum boundry: ";
	int max;
	cin >> max;
	
	srand(time(0));
	
	vector<int> vec(size);
	
	randVec(vec, min, max);
	printVec(vec);
	
	mSort(vec, 0, vec.size() - 1);
	printVec(vec);
	
	return 0;
}
