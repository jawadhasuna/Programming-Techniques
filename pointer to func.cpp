#include<iostream>
using namespace std;
int multiply(int a,int b)
{
	return a*b;
}
main()
{
	int a=5,b=10;
	int(*ptr)(int,int);
	ptr=multiply;
	cout<<"mul is: "<<ptr(a,b);	
	
}
