#include<iostream>
using namespace std;
void numberPresent(int size,int array[]);
 main()
{
	int size,array[size];
	int result;
	cout << "Enter the size of array: \n";
	cin >> size;
	cout<<"Enter numbers: ";
	for(int y=0;y<size;y++)
	{
		cin>>array[y];
	}
	numberPresent(size,array);
}
void numberPresent(int size,int array[])
{
	int n,digit;
	for(int x=0;x<size;x++)	
	{
		if(array[x]%10==7)
		{
			n++;
		}
		if(array[x]/10==7)
		{
			n++;
		}
		if(array[x]>9)
		{
			digit=array[x]%10;
			digit=array[x]/10;
			n++;
		}
	}
		if(n>0)
		{
		cout<<"Boom!";
		}
		else
		{
			cout<< "No seven present!";
		}
	

}
	
