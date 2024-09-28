#include<iostream>
#include<cstring>
using namespace std;
void swap(char*a,char*b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void perm(string s,int l,int r)
{
	if(l==r)
	{
		cout<<s<<endl;
	}
  for(int i=l;i<=r;i++)
  {
  	swap(&s[i],&s[l]);
  	perm(s,l+1,r);
  }
}
main()
{
	int size;
	string str;
	cout<<"enter size of a string u want to mention: ";
    cin>>size;
	cout<<"enter string:  ";
	cin>>str;
	cout<<"permutation is: \n";
	perm(str,0,size-1);
}
