#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

class Person
{
	public:
		Person();
		void pop();
		void setBf(Person* bestfriend);
		void setName(const string &name);
		string getName() const;	
		void print() const;
		
	private:
		string name;
		int popularity;
		Person* bestfriend;
};

Person::Person()
{
	popularity = 0;
	bestfriend = 0;
}

void Person::pop()
{
	popularity++;
}

void Person::setBf(Person* bestfriend)
{
	this->bestfriend = bestfriend;
}

void Person::setName(const string &name)
{
	this->name = name;
}

string Person::getName() const
{
	return name;
}

void Person::print() const
{
	cout << name << "  " << popularity << "  " << bestfriend->name << endl;
}

void read(vector<Person*> &data)
{
	bool more = true;
	
	while (more)
	{
		string name;
		cin >> name;
		if (name != "q")
		{
			Person* p = new Person;
			p->setName(name);
			data.push_back(p);
		}
		else
		{
			more = false;
		}
	}
}

int find(vector<Person*> &data, string &name)
{
	int i;
	for (i = 0; i < data.size(); i++)
	{
		if (data[i]->getName() == name)
		{
			break;
		}
	}
	return i;
}

void setBF(vector<Person*> &data)
{
	for (int i = 0; i < data.size(); i++)
	{
		cout << "Who is the bf of: " << data[i]->getName() << endl;
		string name;
		cin >> name;
		int res = find(data, name);
		assert (res < data.size());
		data[i]->setBf(data[res]);
		data[res]->pop();
	}
}

int main()
{
	vector<Person*> data;
	
	read(data);
	setBF(data);
	
	for (int i = 0; i < data.size(); i++)
	{
		data[i]->print();
	}
	
	for (int i = 0; i < data.size(); i++)
	{
		delete data[i];
		data[i] = nullptr;
	}

	return 0;
}
