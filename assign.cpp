#include<iostream>
using namespace std;
class num
{
	private: int a,b;
	public: void read()
	{
		cout<<"enter a,b \n";
		cin>>a>>b;
		
	}
	void display()
	{
		cout<<"\n a= "<<a<<"\n b= "<<b;
	}
	void operator =(num obj1)
	{
		a=obj1.a;
		b=obj1.b;
		
	}
};
int main()
{
	num obj1,obj2;
	obj1.read();
	obj2=obj1;
	obj2.display();
	
}

