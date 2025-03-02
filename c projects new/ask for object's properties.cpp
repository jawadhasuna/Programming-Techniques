#include<iostream>
using namespace std;
class student{
	public:
	int age;
	float weight; 
	int per(int obt) 
	{
		int p=obt*100/500;
		return p;
	}
};
 
main()
{
  student ali;	
	cout<<"enter  age: ";
	cin>>ali.age;
	cout<<"enter ali weight: ";
	cin>>ali.weight;
	cout<<ali.age<<endl<<ali.weight<<endl<<ali.per(400);
	
} 
