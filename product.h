#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>

using namespace std;

class product{
	
	private:
		string name;
		double price;
		int quantity;
	
	public:
		explicit product(string n, int p, int q=0);
		~product();
		void setName(string n);
		string getName();
		void setPrice(double p=0);
		double getPrice();
		void setQuantity(int q);
		int getQuantity();
		int addQuantity(int q);
		int removeQuantity(int q);
    	void display();
    	static double calculateTotalValue(int quantity=0, double price=0);
    	
    	    	
    //friend ostream& operator<<(ostream& output, const product& p);
    //friend istream& operator>>(istream& input, product& p);
    	
};

#endif
