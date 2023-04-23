#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVec(vector<string> &vec, string s)
{
	bool target = true;
	
	while (target)
	{
		getline(cin, s);
		if (s == "q")
		{
			target = false;
		}
		else
		{
			vec.push_back(s);
		}	
	}
}

void printVec(const vector<string> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

void merge(vector<string> &vec, int start, int mid, int end)
{
	int range = end - start + 1;
	vector<string> temp(vec.size());
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
	
	//remaining elements from first half
	while (fh <= mid)
	{
		temp[pos] = vec[fh];
		fh++;
		pos++;
	}
	
	//remaining elements from second half;
	while (sh <= end)
	{
		temp[pos] = vec[sh];
		sh++;
		pos++;
	}
	
	//copying elements from temp to original vector
	for (pos = 0; pos < range; pos++)
	{
		vec[start + pos] = temp[pos];
	}
}

void mSort(vector<string> &vec, int start, int end)
{
	if (start < end)
	{
		int mid = start + ((end - start) / 2);
		
		mSort(vec, start, mid);
		mSort(vec, mid + 1, end);
		
		merge(vec, start, mid, end);
	}
}

int binSearch(const vector<string> &vec, string find, int low, int high)
{
	if (low > high)
	{
		return false;
	}
	else
	{
		int mid = (low + high) / 2;
		if (find == vec[mid])
		{
			return mid;
		}
		else if (find > vec[mid])
		{
			return binSearch(vec, find, mid + 1, high);
		}
		else
		{
			return binSearch(vec, find, low, mid - 1);
		}
	}

}

int main()
{
	vector<string> vec;
	string s;
	
	readVec(vec, s);
	
	mSort(vec, 0, vec.size() - 1);
	printVec(vec);
	
	string find;
	cin >> find;
	cout << "The string is found in the vector at position: " << binSearch(vec, find, 0, vec.size()) << endl;
	
	return 0;
}
