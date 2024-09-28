#include<iostream>
using namespace std;
const int a=5;
const int b=10;
int multiply()
{
	return a*b;
}
void print(int(*a)())
{
	cout<<"value is: "<<a();
}
main()
{
	print(multiply);
}
