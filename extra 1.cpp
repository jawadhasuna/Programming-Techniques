#include<iostream>
using namespace std;
main()
{
	int *a,size,sum=0;
	cout<<"enter size:";
	cin >>size;
	a=new int [size];
	cout<<"enter elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum:"<<sum;
	delete []a;
	a=NULL;
	
}

