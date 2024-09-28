#include<iostream>
using namespace std;
int duplicate(int *a,int size)
{
	int c;

	
	for(int i=0;i<size;i++)
	{
	
	for(int j=i+1;j<size;j++)
    {
	    if(a[i]==a[j])
	{c++;
	for(int k =j;k<size-1;k++)
	{
		
		a[k]=a[k+1];
	}
    }
    }
    }
   
    return c-1;
} 
main()
{
	int size;
	cout<<"enter size";
	cin>>size;
	int *a=new int[size];
	cout<<"enter elements : \n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	size=duplicate(a,size);
	cout<<"new array size: "<<size<<endl;
	cout<<"with elements: \n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
	
	delete []a;
	a=NULL;

}
