#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	public: 
		Account();
		void read();
		void setBalance(double balance);
		double getBalance() const;
		void addMoney(double add);
		void withdrawMoney(double withdraw);
		void interest(int percent);
				
	private:
		static const double PENALTY;
		double balance;
};


#endif
