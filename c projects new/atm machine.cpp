#include<iostream>
using namespace std;
class atm{
	private: // doing private is also called incapsulation or ploymorphism or abstruction
		int code;
	    int bal;
	public:
		long cardno;
	void setData()
	{
		code=1212;
		bal=25000;
		cardno=12345;
	}
	int checkcode(int);
	void showBal();
	void withdraw (int);
};
int atm::checkcode(int c)
{
	if(code==c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void atm::showBal()
{
	cout<<"current bal. is: "<<bal;
}

void atm::withdraw(int amt)
{
	if (bal>=amt)
	{
		bal=bal-amt;
		cout<<"withdraw successful current bal is: "<<bal;
	}else
	{
	cout<<"withdraw failed insufficent bal";
    }
}

 main()
{
	int usercode;
	int ch,amt;
    atm a;
    a.setData();
cout<<"enter your code:";
cin>>usercode;
if(a.checkcode(usercode))
{
	cout<<"1.bal check"<<endl;
	cout<<"2. withdraw"<<endl;
    cout<<"enter ur choice:"; 
    cin>>ch;
    switch(ch)
   {
   	case 1:
   	a.showBal();
   	break;
   	case 2:
   		cout<<endl<<"enter the amount:";
   		cin>>amt;
   a.withdraw(amt);
   break;
   default:
   cout<<"invalid choice";
   }   
}
else
{
	cout<<"incorrect code:-(";
}
}





