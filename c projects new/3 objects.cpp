#include<iostream>
using namespace std;
class student 
{
	//Properties/Data/Attributes
	public:	
	int age;
	float weight; 
	double height;	
  	string name;

	//functions/methods
	float per(int obt)
	{
		 float per=obt*100/500;
		 return per;
	}	
}; 
 
main ()
{
	student ali; //Object
	ali.name = "ALI UMAR";
	ali.age=10;
	ali.height=6.1;
	ali.weight=100.3;
	cout<<ali.name<<endl<<ali.age<<endl<<ali.height<<endl<<ali.weight<<endl;
	cout<<ali.per(500)<<endl<<" "<<endl;

	student umar; //Object
	umar.name = "Umar Ali";
	umar.age=15;
	umar.height=5.1111;
	umar.weight=200.3;
	
	student jawad; //Object
	jawad.name = "jawad hassan";
	jawad.age=20;
	jawad.height=7.1;
	jawad.weight=50.232323;

	cout<<umar.name<<endl<<umar.age<<endl<<umar.height<<endl<<umar.weight<<endl;
	cout<<umar.per(499)<<endl;
	cout<<" "<<endl<<jawad.name<<endl<<jawad.age<<endl<<jawad.height<<endl<<jawad.weight<<endl;
	cout<<jawad.per(438);
}

