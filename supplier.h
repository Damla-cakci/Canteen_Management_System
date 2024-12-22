#ifndef SUPPLIER_H
#define SUPPLIER_H

#include<iostream>
#include<string>

using namespace std;

class supplier{
	
	private:
		string name;
		string email;
		int phone;
		
	public:
		supplier(string n, string email, int phone);
		void setName(string n);
		string getName();
		void setEmail(string a);
		string getEmail();
		void setPhone(int p);
		int getPhone();
		
	friend void display(supplier supplier); 
	
	//friend ostream& operator<<(ostream& output, const supplier& s);
    //friend istream& operator>>(istream& input, supplier& s);
};

void display(supplier supplier);

#endif
