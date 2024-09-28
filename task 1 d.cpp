#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
main()
{
char copy[50]; 
char *ptr=copy;
char original[] = {'C','+','+',' ','i','s',' ','b','e','s','t','\0'};

for(int index=0;original[index]!='\0';index++)
{
ptr[index]=original[index];
}

cout<<*(ptr+6)<<endl; 
ptr++;
cout<<ptr;
}


