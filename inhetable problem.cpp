#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void setdata()
		{
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<b;
		}
};
class B:public A
{
	int x,y;
	public:
		void getdata()
		{
			cin>>x>>y;
		}
		void display()
		{
			cout<<x<<y;
		}
};
int main()
{
	A obj1,obj2;
	obj1.setdata();
	//obj2=obj1;
	//obj2.show();
	B o1,o2;
	//o1.getdata();
//	o2=obj1;
	o2.show();
}
