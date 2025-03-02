#include<iostream>
using namespace std;
class student { //class aka combination of data and functions
	public:
	string name="Zain";
	int age = 18;
	float weight=110.7869;
	char bloodgroup='B';
	string haircolor="black";
	string gender="Male";
	int per(int obt)
	{
	 int p=obt*100/500;
	 return p;    				}				
	
};

main()
{
	student zain; //object aka combination of properties and method
	cout<<zain.name<<endl<<zain.age<<endl<<zain.weight<<endl<<zain.bloodgroup<<endl<<zain.haircolor<<endl<<zain.gender<<endl<<zain.per(450);
	
	
	
}
