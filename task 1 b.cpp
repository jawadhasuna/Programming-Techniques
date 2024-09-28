#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
main()
{
int length=0; 
char *ptr;
char original[] = {'C','+','+',' ','i','s',' ','b','e','s','t','\0'};
ptr=original;
for(int index=0;ptr[index]!='\0';index++) 
length++;
cout<<length; 
}

