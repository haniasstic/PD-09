#include<iostream>
#include<string.h>
using namespace std;
int commonCharacter(string s1,string s2);
int main()
{
	string s1,s2;
	int result;
	cout<< "Enter String 1: "<<endl;
	cin>>s1;
	cout<<"Enter String 2: "<<endl;
	cin>>s2;
	result=commonCharacter(s1,s2);
	cout<<"Strings have "<<result<<" common characters."<<endl;
}
int commonCharacter(string s1,string s2)
{
	int count=0;
	for(int i=0; s1[i]!='\0';i++)
	{
		for(int j=0;s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
			{
				count++;
				s2[j]==238;
				break;
			}
		}
	}
	return count;
}
