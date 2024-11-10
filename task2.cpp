#include<iostream> 
using namespace std;
int price(string name,string movie[]);
int main()
{
	int result;
	string name;
	string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
	cout<< "Enter the name of movie: ";
	cin>>name;
	result=price(name,movie);
	cout<<result;
}
int price(string name,string movie[])
{
	int priceTotal=500;
	for(int x=1;x<5;x=x+2)
	{
		if(name==movie[x])
		{
		priceTotal-=priceTotal*0.05;
    	}
	else
	{
		priceTotal -= (priceTotal * 0.10);
	}
}
	return priceTotal;
}
