#include<iostream>
#include<string>
using namespace std;
main()
{
	int n;
	string change;
	string newword;
	cout<<"enter the amount of words you will enter:";
	cin>>n;
	string str [n];
	cout<<"enter ur string one by one: \n";
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	cout<<"your enterd string is: \n";
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<" ";
	}
	cout<<endl<<"enter substring u want to change: ";
	cin>>change;
	cout<<"enter substring u want to change it with: ";
	cin>>newword;
	for(int i=0;i<n;i++)
	{
		if(str[i]==change)
		{
			str[i]=newword;
		}
	}
	cout<<"your new sentence becomes: \n";
		for(int i=0;i<n;i++)
	{
		cout<<str[i]<<" ";
	}
}
