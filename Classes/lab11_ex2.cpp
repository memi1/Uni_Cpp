#include <iostream>
#include <string>

using namespace std;

class Student
{
	public: 
		Student();
		Student(const string &, const string &, int);
		void readData();
		void printData() const;
		void setFname(const string &name);
		string getFname() const;
	private:
		string f_name;
		string s_name;
		int f_num;		
};

Student::Student()
{
	f_name = "<empty>";
	s_name = "<empty>";
	f_num = 0;
}

Student::Student(const string &f_name, const string &s_name, int f_num)
{
	this->f_name = f_name;
	this->s_name = s_name;
	this->f_num = f_num;
}

void Student::readData()
{
	cout << "First name: ";
	cin >> f_name;
	cout << "Surname: ";
	cin >> s_name;
	cout << "Faculty number: ";
	cin >> f_num;
}

void Student::printData() const
{
	cout << "The name is: " << f_name << " " << s_name << " with faculty number: " << f_num << endl;
}

void Student::setFname(const string &name)
{
	f_name = name;
}

string Student::getFname() const
{
	return f_name;
}

int main()
{
	Student student1("Apple", "Smith", 2566);
	
	Student student2;
	
	student1.printData();
	
	student2.readData();
	student2.printData();
	
	Student student3;
	student3.setFname("Anabelle");
	cout << student3.getFname() << endl;
	
	
	return 0;
}
