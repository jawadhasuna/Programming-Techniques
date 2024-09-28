#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
char city[80] = "Islamabad";
char places[4][80] = {"Lahore", "Hanoi", "Karachi", "Madrid"};
cout<<places[3] << '\n'; 
cout<<places[2][4] << '\n'; 
cout<<places[1][6] << '\n'; 
cout<< city << '\n'; 
cout<<city[4] << '\n';
 return 0;
}

