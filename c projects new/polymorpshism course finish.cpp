#include<iostream>
using namespace std;
class func_over{
	private:
		int a,b,c,d;
		public:
			int sum(int,int);
			int sum(int,int,int);
			int sum(int,int,int,int);
};
int func_over::sum(int a,int b)
{
	return(a+b);
}
int func_over::sum(int a,int b,int c)
{
	return(a+b+c);
}
int func_over::sum(int a,int b, int c,int d)
{
	return(a+b+c+d);
}
 main()
{
	func_over obj;
	cout<<"\nsum of 2 no. 10,20 : "<<obj.sum(10,20);
	cout<<"\nsum of 3 no. 10,20,30 : "<<obj.sum(10,20,30);
	cout<<"\nsum of 4 no. 10,20,40 : "<<obj.sum(10,20,30,40);
}



