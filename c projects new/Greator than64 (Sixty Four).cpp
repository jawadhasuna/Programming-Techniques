#include<iostream>
using namespace std;
int main ()
{
 int n;
 cout<<"Enter the number Greator than 64 : ";
 cin>>n;
 if (n<65)
 {
 	cout<<"ENTER THE NUMBER GREATOR THAN 64!!";
 }
else 
for(int i=65;i<=n;i++)
{
	for(int j=65;j<=i;j++)
    {
    	cout<<"   "<<char(j);
	}
       cout<<endl;
}

} 
