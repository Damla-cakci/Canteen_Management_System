#include<iostream>
#include<string>
#include"supplier.h"

using namespace std;

supplier::supplier(string n, string e, int p){
	name=n;
	email=e;
	phone=p;
}

void supplier::setName(string n){
    name = n;
}
		
string supplier::getName(){
	return name;
}
		
void supplier::setEmail(string e){
	email = e;
}
		
string supplier::getEmail(){
	return email;
}
		
void supplier::setPhone(int p){
	phone = p;
}
		
int supplier::getPhone(){
	return phone;
}

void display(supplier supplier){
	cout << "Name: " << supplier.name << endl;
    cout << "Mail: " << supplier.email << endl;
    cout << "Phone: " << supplier.phone << endl;
}

/*ostream& operator<<(ostream& output,  supplier& s) {
    output << "Name: " << s.getName() << endl;
    output << "Mail: " << s.getEmail() << endl;
    output << "Phone: " << s.getPhone() << endl;

    return output;
}

istream& operator>>(istream& input, supplier& s) {
    cout << "Enter the name: ";
    input >> s.name;
    cout << "Enter the email: ";
    input >> s.email;
    cout << "Enter the phone: ";
    input >> s.phone;

    return input;
}*/
