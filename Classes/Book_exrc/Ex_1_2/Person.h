#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
	public:
		Person();
		Person(const string &name, int age);
		void setName(const string &name);
		string getName() const;
		int getAge() const;
			
	private:
		string name;
		int age;
};

#endif
