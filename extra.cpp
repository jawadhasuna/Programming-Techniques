#include<iostream>
using namespace std;
main()
{
	int n=5;
	int **a= new int*[n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int [3];
	 } 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<endl;
		}
	}
	for(int i=0;i<n;i++)
	{
		delete[]a[i];
	}
	delete []a;
	a=NULL;
}
