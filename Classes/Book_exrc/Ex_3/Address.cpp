#include <iostream>
#include <string>

using namespace std;

#include "Address.h"

Address::Address()
{
	house_number = 0;
	apartment_number = 0;
	postal_code = 0;
}

Address::Address(int house_number, const string &street, int apartment_number, const string &city, const string &state, int postal_code)
{
	this->house_number = house_number;
	this->street = street;
	this->apartment_number = apartment_number;
	this->city = city;
	this->state = state;
	this->postal_code = postal_code;
}

Address::Address(int house_number, const string &street, const string &city, const string &state, int postal_code)
{
	this->house_number = house_number;
	this->street = street;
	this->city = city;
	this->state = state;
	this->postal_code = postal_code;
}

void Address::print() const
{
	cout << street << endl;
	cout << city << ", " << state << ", " << postal_code << endl;
}

string Address::getStreet() const
{
	return street;
}

bool Address::comesBefore(const Address &add2) const
{
	return postal_code < add2.postal_code;	
}
