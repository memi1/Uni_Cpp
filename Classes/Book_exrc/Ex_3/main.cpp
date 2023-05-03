#include <iostream>
#include <string>

using namespace std;

#include "Address.h"

int main()
{
	Address a1(12, "Cookie Str.", "Flower", "Jeju", 1000);
		
	Address a2(17, "Icecream Str.", 23, "Choco", "Daegu", 367);
	
	a1.print();
	a2.print();
	cout << a1.getStreet() << " comes before " << a2.getStreet() << " : " << (a1.comesBefore(a2) ? "true": "false") << endl;
	
	return 0;
}
