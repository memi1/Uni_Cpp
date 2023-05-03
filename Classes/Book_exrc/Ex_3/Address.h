#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

class Address
{
	public:
		Address();
		Address(int house_nuber, const string &street, int apartment_number, const string &city, const string &state, int postal_code);
		Address(int house_number, const string &street, const string &city, const string &state, int postal_code);
		void print() const;
		string getStreet() const;
		bool comesBefore(const Address &add2) const;
		
	private:	
		int house_number;
		string street;
		int apartment_number;
		string city;
		string state;
		int postal_code;
};

#endif
