#include<iostream>
using namespace std;
class student{
	public:
	int age;
	float weight;
	string eyecolor;
	string gender;
};
 main()
 {
  student ali;
  ali.age=18;
  ali.weight=85.5;
  ali.eyecolor="brown";
  ali.gender="male";
  cout<<ali.age<<endl<<ali.weight<<endl<<ali.eyecolor<<endl<<ali.gender<<endl;
  
  student umer;
  umer.age=19;
  umer.weight=95.5;
  umer.eyecolor="hazel brown";
  umer.gender="Male";
  cout<<endl<<umer.age<<endl<<umer.weight<<endl<<umer.eyecolor<<endl<<umer.gender;
 }
