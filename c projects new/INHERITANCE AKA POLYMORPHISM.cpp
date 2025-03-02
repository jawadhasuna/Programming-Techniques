#include<iostream>
using namespace std;
class baseclass {
	public:
	int sum(int a,int b)	
	{
	return a+b;	
	}
};
class derivedclass : public baseclass
{

public:
int mul(int a, int b)
{
  return a*b;	

	}	


};
main()
{
	int i,j;
	cout<<"enter i and j:";
	cin>>i>>j;
	derivedclass d;
	cout<<"sum :"<<d.sum(i,j)<<endl;
	cout<<"mul :"<<d.mul(i,j);
}
