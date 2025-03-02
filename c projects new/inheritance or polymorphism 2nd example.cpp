#include<iostream>
using namespace std;
class animal{
	public:
	void eatandsleep()
	{
	  cout<<"i can eat and sleep!!"<<endl;
	}
	
};
class dog : public animal{
	public:
	void bark()
	{
		cout<<"i can bark"<<endl;
	}
};
class cat :public animal{
	public:
	void meow()
	{
		cout<<"i can meow"<<endl;
	}
};

class horse:public animal{
	public:
	void nehaw()
	{
		cout<<"i can nehaw"<<endl;
	}
};

int main()
{
	dog dog1;
	dog1.bark();
	dog1.eatandsleep();
	
	cat cat1;
	cat1.meow();
	cat1.eatandsleep();
	
	horse horse1;
	horse1.nehaw();
	horse1.eatandsleep();
	
}
