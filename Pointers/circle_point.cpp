#include <iostream>

using namespace std;

class Circle
{
	public:
		Circle();
		Circle(int x, int y, int rad);
		void read();
		void print() const;
		void setX(int x);
		int getX() const;
		void setY(int x);
		int getY() const;
		void setR(int rad);
		int getR() const;
				
	private:
		int x;
		int y;
		int rad;
	
};

Circle::Circle()
{
	x = 0;
	y = 0;
	rad = 0;
}

Circle::Circle(int x, int y, int rad)
{
	this->x = x;
	this->y = y;
	this->rad = rad;
}

void Circle::read()
{
	cout << "Enter x: ";
	cin >> x;
	
	cout << "Enter y: ";
	cin >> y;
	
	cout << "Enter radius: ";
	cin >> rad;
}

void Circle::print() const
{
	cout << getX() << " " << getY() << " " << getR() << endl;
}

void Circle::setX(int x)
{
	this->x = x;
}

int Circle::getX() const
{
	return x;
}

void Circle::setY(int y)
{
	this->y = y;
}

int Circle::getY() const
{
	return y;
}

void Circle::setR(int rad)
{
	this->rad = rad;
}

int Circle::getR() const
{
	return rad;
}


int main()
{
	Circle* ptr_c = nullptr;
	
	ptr_c = new Circle(1, 7, 4);
	
	ptr_c->print();
	(*ptr_c).print();
	
	if (ptr_c)
	{
		delete ptr_c;
		ptr_c = nullptr;
	}
	
	Circle* ptr_c2 = nullptr;
	
	ptr_c2 = new Circle;
	
	(*ptr_c2).setX(3);
	(*ptr_c2).setY(5);
	ptr_c2->setR(9);
	ptr_c2->print();
	
	if (ptr_c2)
	{
		delete ptr_c2;
		ptr_c2 = nullptr;
	}
	

	cout << "Enter size: ";
	int size;
	cin >> size;
	
	Circle* arr = nullptr;
	
	arr = new Circle[size];
	
	for (int i = 0; i < size; i++)
	{
		arr[i].read();
	}
	
	for (int i = 0; i < size; i++)
	{
		arr[i].print();
	}
	
	if (arr)
	{
		delete[] arr;
		arr = nullptr;
	}


	return 0;
}


