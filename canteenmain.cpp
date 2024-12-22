#include <iostream>
#include "supplier.h"
#include "product.h"
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	int choice;
	int _choice;
	int p_choice;
	int x;
	int num;
	int _quantity;
	int total=0;

    supplier s1("Damla", "damla8@gmail.com",531307);
	supplier s2("Taha","taha2@gmail.com",538145);
    supplier s3("Cemre","cemre8@gmail.com",531207);
    supplier s4("Erberk","seftali@gmail.com",532405);
    supplier s5("Yusuf","yuzarsif31@gmail.com",532605);

    product p1("coke",10,90);
    product p2("cake",8,50);
    product p3("chocolate",8,75);
    product p4("milk",9,50);
    product p5("juice",15,120);
    product p6("ice-cream",22,135);
    product p7("chips",18,90);
    product p8("jelly-beans",14,45);
    product p9("water",3,250);
    product p10("lollipop",7,80);
    
    
    while(true){
	cout << "******Canteen Management System******" << endl;
	cout <<"\n";
	cout << "1 - Suppliers Information" << endl;
	cout << "2 - Products Information" << endl;
	cout << "3 - Add or Remove Product" << endl;
	cout << "4 - Shopping" << endl;
	cout << "5 - EXIT";
	cout <<"\n";
	
	cout << "Enter the number of the action you want to do:";
	cin >> choice;
    system("cls");

    switch(choice){
    	
    case 1:	
	    cout << "Suppliers Information" << endl;
    	cout <<"\n";
        display(s1);
        cout <<"\n";
    	display(s2);
    	cout <<"\n";
    	display(s3);
    	cout <<"\n";
    	display(s4);
    	cout <<"\n";
    	display(s5);
	
	    break;
	    
	case 2:
		
		cout << "Products Information" << endl;
        cout <<"\n";
        p1.display();
        cout <<"\n";
        p2.display();
        cout <<"\n";
        p3.display();
        cout <<"\n";
        p4.display();
        cout <<"\n";
        p5.display();
        cout <<"\n";
        p6.display();
        cout <<"\n";
        p7.display();
        cout <<"\n";
        p8.display();
        cout <<"\n";
        p9.display();
        cout <<"\n";
        p10.display();
		
		break;
	
	case 3:
	
	cout << "   Products" << "\t     Quantity" << endl;
	cout << "1 - Coke" << "\t" << " ->\t" << p1.getQuantity() << endl;
	cout << "2 - Cake" << "\t" << " ->\t" << p2.getQuantity() << endl;
	cout << "3 - Chocolate" << "\t" << " ->\t" << p3.getQuantity() << endl;
	cout << "4 - Milk" << "\t" << " ->\t" << p4.getQuantity() << endl;
	cout << "5 - Juice" << "\t" << " ->\t" << p5.getQuantity() << endl;
	cout << "6 - Ice-cream" "\t" << " ->\t" << p6.getQuantity() << endl;
	cout << "7 - Chips" << "\t" << " ->\t" << p7.getQuantity() << endl;
	cout << "8 - Jelly-Beans" "\t" << " ->\t" << p8.getQuantity() << endl;
	cout << "9 - Water" << "\t" << " ->\t" << p9.getQuantity() << endl;
	cout << "10 - Lollipop" "\t" << " ->\t" << p10.getQuantity() << endl;
	
	cout << "\n";
	cout << "\n";
	
	cout << "1 - Add product" << endl;
	cout << "2 - Remove product" << endl;
	
	cout << "\n";
	
	cout << "Enter your choice: ";
	cin >> _choice ;
	
	if(_choice==1){
		
		cout << "Which product do you want to change?" << endl;
		cin >> p_choice;
		
		cout << "How many products do you want to add?" << endl;
		cin >> x;
		
		switch(p_choice){
			
			case 1:
				p1.addQuantity(x);
				p1.display();
				break;
		
		    case 2:
				p2.addQuantity(x);
				p2.display();
				break;
			
		    case 3:
				p3.addQuantity(x);
				p3.display();
				break;
		
		    case 4:
				p4.addQuantity(x);
				p4.display();
				break;
			
			case 5:
				p5.addQuantity(x);
				p5.display();
				break;
		
			case 6:
				p6.addQuantity(x);
				p6.display();
				break;
			
			case 7:
				p7.addQuantity(x);
				p7.display();
				break;
		
			case 8:
				p8.addQuantity(x);
				p8.display();
				break;
			
			case 9:
				p9.addQuantity(x);
				p9.display();
				break;
		
			case 10:
				p10.addQuantity(x);
				p10.display();
				break;
			
			default :
				cout << "Invalid Value" << endl;
				
			}

	}
	
	else if(_choice==2){
					
		cout << "Which product do you want to change?" << endl;
		cin >> p_choice;
		
		cout << "How many products do you want to remove?" << endl;
		cin >> x;
			
		switch(p_choice){

			case 1:
				p1.removeQuantity(x);
				p1.display();
				break;
				
			case 2:
				p2.removeQuantity(x);
				p2.display();
				break;
				
			case 3:
				p3.removeQuantity(x);
				p3.display();
				break;
				
			case 4:
				p4.removeQuantity(x);
				p4.display();
				break;
				
			case 5:
				p5.removeQuantity(x);
				p5.display();
				break;
				
			case 6:
				p6.removeQuantity(x);
				p6.display();
				break;
				
			case 7:
				p7.removeQuantity(x);
				p7.display();
				break;
				
			case 8:
				p8.removeQuantity(x);
				p8.display();
				break;
				
			case 9:
				p9.removeQuantity(x);
				p9.display();
				break;
				
			case 10:
				p10.removeQuantity(x);
				p10.display();
				break;
				
			default :
				cout << "Invalid Value" << endl;
						
		}
	}
	
	else{
		
		cout << "Invalid Value" << endl;
	}
	
	cout << "Press any key to continue...";
    getch();
    system("cls");
    
    case 4:
    	p1.display();
    	cout << "\n";
    	p2.display();
    	cout << "\n";
    	p3.display();
    	cout << "\n";
    	p4.display();
    	cout << "\n";
    	p5.display();
    	cout << "\n";
    	p6.display();
    	cout << "\n";
    	p7.display();
    	cout << "\n";
    	p8.display();
    	cout << "\n";
    	p9.display();
    	cout << "\n";
    	p10.display();
    	cout << "\n";
    	cout << "Enter the number of the product you want to buy and the quantity you want to buy:";
    	cin >> num >> _quantity;
    	if(num==1){
    		total=total+product::calculateTotalValue(_quantity,10);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==2){
    		total=total+product::calculateTotalValue(_quantity,8);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==3){
    		total=total+product::calculateTotalValue(_quantity,8);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==4){
    		total=total+product::calculateTotalValue(_quantity,9);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==5){
    		total=total+product::calculateTotalValue(_quantity,15);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==6){
    		total=total+product::calculateTotalValue(_quantity,22);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==7){
    		total=total+product::calculateTotalValue(_quantity,18);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==8){
    		total=total+product::calculateTotalValue(_quantity,14);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==9){
    		total=total+product::calculateTotalValue(_quantity,3);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		if(num==10){
    		total=total+product::calculateTotalValue(_quantity,7);
    		p1.removeQuantity(_quantity);
    		p1.display();
		}
		
		cout << "Total Basket Amount:" << total << endl;
		
    case 5:
		
		break;
	}

}
    return 0;
}

