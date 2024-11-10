#include<iostream>
using namespace std;
int total(string name,int quantity,string fruit[],int price[]);
main()
{
	int quantity,result;
	string name;
	string fruit[4]={"peach","apple","guava","waterlemon"};
	int price[4]={60,70,40,30};
	cout << "Enter the name of fruit: ";
	cin>> name;
	cout << "Enter the quantity in kgs: ";
	cin >> quantity;
	result=total(name,quantity,fruit,price);
	cout<<"Total_price: "<<result;
}
int total(string name,int quantity,string fruit[],int price[])
{
    int totalPrice;
	for(int x=0;x<4;x++){
		if(name==fruit[x]){
			totalPrice=price[x]*quantity;
		}
	}
	return totalPrice;
}




