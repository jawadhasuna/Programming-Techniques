#include<iostream>
using namespace std;
void first(int&);
int second(int);
main()
{
	int a;
	void(*one)(int&);
	int(*two)(int);
	one=first;
	two=second;
	one(a);
	cout<<two(a);
}
void first(int &a)
{
	a=10;
	
}
int second(int a )
{
	return a*a;
}
