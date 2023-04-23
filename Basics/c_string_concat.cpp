#include <iostream>

using namespace std;

const int CPCT = 256;

int strlen(const char str[])
{
	int res = 0;
	while (str[++res]);
	
	return res;
}

void concatenate(const char str1[], const char str2[], char res[], int len_str1, int len_str2, int max_len)
{
	int i = 0;
	int j = 0;
	int k = 0;
	if (max_len < CPCT)
	{
		while (str1[i] != '\0' && k < CPCT)
		{
			res[k] = str1[i];
			i++;
			k++;
		}
		while (str2[j] != '\0' && k < CPCT)
		{
			
			res[k] = str2[j];
			j++;
			k++;
		}
		
		res[k] = '\0';
		
	}
}

void printStr(const char str[])
{
	cout << str << endl;
}

int main()
{
	char str1[CPCT];
	cout << "Enter c-string1: ";
	cin >> str1;
	
	char str2[CPCT];
	cout << "Enter c-string2: ";
	cin >> str2;
	
	char concat[CPCT];
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int max_len = len1 + len2;
	
	cout << len1 << " " << len2 << endl;
	
	concatenate(str1, str2, concat, len1, len2, max_len);
	
	printStr(str1);
	printStr(str2);
	printStr(concat);
	
	return 0;
}
