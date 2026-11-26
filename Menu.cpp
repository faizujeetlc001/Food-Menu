#include<iostream>
using namespace std;
int main()
{
	int choice, quantity, price = 0;
	cout<<"<Menu> ";
	cout<<"Burger(5$) "<<endl;
	cout<<"Pizza(8$) "<<endl;
	cout<<"Sandwich(4$) "<<endl;
	cout<<"Enter your choice";
	cin>>choice;
	cout<<"Enter quantity ";
	cin>>quantity;
	switch(choice){
		case 1: price=5; break;
		case 2: price=8; break;
		case 3: price=4; break;
		default: cout<<"item not available ";
	} 
	cout<<"Total Bill= $ " <<price*quantity;
	return 0;	
}