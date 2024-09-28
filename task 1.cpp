#include<iostream>
#include<cstdlib>
using namespace std;
main()
{int a[20],b[20],temp;
int *p=a,*l=b;
for(int i=0;i<20;i++)
{
   p[i]=(rand()%101);
   l[i]=a[i];
}
cout<<"array values: \n ";
for(int i=0;i<20;i++)
{
   cout<<p[i]<<endl;
}
for(int i=0;i<20;i++)
{
	for(int j=0;j<19;j++)
{
	if(l[j]>l[j+1])
	{
		temp=l[j];
		l[j]=l[j+1];
		l[j+1]=temp;
	}
}
}		
	cout<<"sorted array: \n";
for(int i=0;i<20;i++)
{
	 cout<<l[i]<<endl;
	}	
	cout<<"median is: "<<(l[10]+l[11])/2;
}
