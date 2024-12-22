#include<iostream>
#include<string>
#include"product.h"

using namespace std;

product::product(string n, int p, int q){
	product::setName(n);
	product::setPrice(p);
	product::setQuantity(q);
}

product::~product(){
	
}

void product::setName(string n){
	name = n;
}
		
string product::getName(){
	return name;
}
		
void product::setPrice(double p){
	if(p>0){
		price = p;
	}
	else{
		cout << "Invalid value" << endl;
	}
}
		
double product::getPrice(){
	return price;
}
		
void product::setQuantity(int q){
	if(q>0){
		quantity = q;
	}
	else{
		cout << "Invalid value" << endl;
	}
}
		
int product::getQuantity(){
	return quantity;	
}

int product::addQuantity(int q) {
	static int new_q;
	new_q=quantity+q;
	setQuantity(new_q);
	
	return new_q;
}

int product::removeQuantity(int q) {
	static int new_q;
	new_q=quantity-q;
	setQuantity(new_q);
	
	return new_q;
}

void product::display(){
	cout << "Name: " << getName() << endl;
    cout << "Price: " << getPrice() << " tl" << endl;
    cout << "Quantity: " << getQuantity() << endl;
}

double product::calculateTotalValue(int quantity, double price) {
    return quantity * price;
}

ostream& operator<<(ostream& output, product& p) {
    output << "Name: " << p.getName() << endl;
    output << "Price: " << p.getPrice() << " tl" << endl;
    output << "Quantity: " << p.getQuantity() << endl;

    return output;
}

istream& operator>>(istream& input, product& p) {
    string name;
    double price;
    int quantity;

    cout << "Enter the name: ";
    input >> name;
    cout << "Enter the price: ";
    input >> price;
    cout << "Enter the quantity: ";
    input >> quantity;

    p.setName(name);
    p.setPrice(price);
    p.setQuantity(quantity);

    return input;
}
