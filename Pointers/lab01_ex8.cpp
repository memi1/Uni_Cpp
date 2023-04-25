#include <iostream>

using namespace std;

const int CPCT = 256;

void strconcat(char* ptr_fst, char* ptr_scd, char* ptr_res)
{
	while (*ptr_fst)
	{
		*(ptr_res++) = *(ptr_fst++);
	}
	while (*ptr_scd)
	{
		*(ptr_res++) = *(ptr_scd++);
	}
	*(ptr_res) = '\0';
}

int main()
{
	char str_first[CPCT];
	cout << "Enter first c-string: ";
	cin >> str_first;
	
	char str_second[CPCT];
	cout << "Enter secodn c-string: ";
	cin >> str_second;
	
	char str_conc[CPCT];
	
	strconcat(str_first, str_second, str_conc);
	
	
	cout << "First c-string: " << str_first << endl;
	cout << "Second c-string: " << str_second << endl;
	cout << "Concatenated c-string: " << str_conc << endl;
	
	return 0;
}
