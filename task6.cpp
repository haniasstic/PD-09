#include<iostream>
using namespace std;
void evenOddTransformation(int size, int array[], int transform);
main()
{
	int size,transform;
	cout<< "Enter the size of array: ";
	cin>>size;
	int array[size];
	cout<<"Enter the array: "<<endl;
	for(int x=0;x<size;x++)
	{
		cin>>array[x];
	}
	cout<<"Enter the number of times you want to do transformation: ";
	cin>>transform;
	evenOddTransformation(size,array,transform);
}
void evenOddTransformation(int size,int array[],int transform)
{
	for(int y=0;y<size;y++)
	{
		if(array[y]%2==0)
		{
			array[y]=array[y]-2*transform;
			cout<<array[y]<<" ";
		}
		else
		{
			array[y]=array[y]+2*transform;
			cout<<array[y]<<" ";
		}
	}
}












	
