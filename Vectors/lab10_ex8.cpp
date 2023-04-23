#include <iostream>
#include <vector>

using namespace std;

void readVec(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << ": ";
		cin >> vec[i];
	}
}

void printVec(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "  ";
	}
	cout << endl;
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
	
	while (fh <= mid)
	{
		temp[pos] = vec[fh];
		fh++;
		pos++;
	}
	while (sh <= end) 
	{
		temp[pos] = vec[sh];
		sh++;
		pos++;
	}
	
	for (pos = 0; pos < range; pos++)
	{
		vec[start + pos] = temp[pos];
	}
}

void sort(vector<int> &vec, int start, int end)
{
	if (start < end)
	{
		int mid = start + (end - start) / 2;
		
		sort(vec, start, mid);
		sort(vec, mid + 1, end);
		
		merge(vec, start, mid, end);
	}
}

int main()
{
	cout << "Enter size for vector: ";
	int size;
	cin >> size;
	
	vector<int> vec(size);
	
	readVec(vec);
	printVec(vec);
	
	sort(vec, 0, vec.size() - 1);
	printVec(vec);
	
	return 0;
}
