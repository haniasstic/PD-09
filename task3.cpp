#include<iostream>
using namespace std;
bool length(string name);
int main()
{
	string name;
	bool result;
	cout<<"Enter string: ";
	cin >> name;
	result=length(name);
	cout<<result;
}
bool length(string name)
{
	int length;
	for(int x=0;name[x]!='\0';x++)
	{
		length++;
	}
	if(length%2==0)
	{
		return true;
	}
	else
	{
		return false;
}
}
