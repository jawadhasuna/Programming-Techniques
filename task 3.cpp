#include<iostream>
using namespace std;
swap(string *s,int j)
{
	string temp;
	temp=s[j];
	s[j]=s[j+1];
	s[j+1]=temp;
}
main()
{
	int size;
	cout<<"enter size:";
	cin>>size;
string s[size];
cout<<"enter words: \n";
for(int i=0;i<size;i++)
{
cin>>s[i];	
}	
for(int j=0;j<size;j++)
{
 for(int i=0;i<size-1;i++)
 {
  if(s[i]>s[i+1])
  {
	swap(s,i);
  }
 }	
} 
cout<<"sorted array is: \n";
for(int i=0;i<size;i++)
{
cout<<s[i]<<endl;	
}		
}
