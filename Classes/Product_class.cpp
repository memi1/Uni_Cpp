#include <iostream>
#include <string>

using namespace std;

class Product
{
	public:
		Product();
		void read();
		void print() const;
		bool isBetterThan(Product b) const;
	
	private:
		string name;
		double price;
		double score;
};

Product::Product()
{
	price = 1.0;
	score = 0.0;
}

void Product::read()
{
	cout << "Please enter model name: ";
	getline(cin, name);
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter score: ";
	cin >> score;
	string remainder;
	getline(cin, remainder);
}

void Product::print() const
{
	cout << name << " Price: " << price << " Score: " << score << endl;
}

bool Product::isBetterThan(Product b) const
{
	if (price == 0)
	{
		return true;
	}
	if (b.price == 0)
	{
		return false;
	}
	
	return score / price > b.score / b.price;
}

int main()
{
	Product best;
	bool more = true;
	
	while (more)
	{
		Product next;
		next.read();
		if (next.isBetterThan(best))
		{
			best = next;
		}
		
		cout << "More data? (y/n)";
		string answer;
		getline(cin, answer);
		if (answer != "y")
		{
			more = false;
		} 
	}
	
	cout <<  "The best value is: ";
	best.print();
	
	return 0;
}
