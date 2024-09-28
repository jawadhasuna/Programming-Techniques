#include<iostream>
using namespace std;
void swap (int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;	
}
void swap (float &a,float &b)
{float temp;
	temp=a;
a=b;
b=temp;	
}
void swap (char &a,char &b)
{char temp;
	temp=a;
a=b;
b=temp;	
}
main()
{
	int a=10,b=11;
	float c=3.0,d=4.0;
	char e='a',f='b';
	swap (a,b);
	swap (c,d);
	swap (e,f);
	cout<<a<<" "<<b<<endl;
	cout<<c<<" "<<d<<endl;
	cout<<e<<" "<<f<<endl;
}
