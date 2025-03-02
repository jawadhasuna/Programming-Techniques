#include<iostream>
using namespace std;
int main()
{//pointer = * and addresses = &
	int i=10;
	float f=3.14;
	char c='a';
	string s="pakistan";
    
    cout<<i<<"\n";
    cout<<f<<endl;
    
       //or
	
	/*int ip=i; 
    float fp=f;
	cout<<ip<<endl; 
	cout<<fp<<endl;*/ 
    
	   //or
       //(to get the assigned value of i and f)
	int *ip=&i; //*ip stands for pointer of integers and fp= pointers of float etc...
    float *fp=&f;
	cout<<*ip<<endl; 
	cout<<*fp<<endl; 
	
	//or to get addresses with pointers :
	/*int *ip=&i; 
    float *fp=&f;
	cout<<ip<<endl; 
	cout<<fp<<endl; */
	//or
	//to get adresses of declared variables :
	cout<<&i<<endl; 
	cout<<&f<<endl; 
	cout<<&s<<endl; 
	cout<<&c<<endl; 	
}
