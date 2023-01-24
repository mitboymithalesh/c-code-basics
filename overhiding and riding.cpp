#include<iostream>
using namespace std;
class A
{
	public:
		virtual void f1()
		{
			cout<<"Hello f1 in A\n";
		}
		void f2()
		{
			cout<<"F2 in A\n";
		}
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"F1 in B";
		}
		void f2(int x)
		{
			cout<<"F2 in b";
		}
};
int main()
{
	A obj1,*p;
	B obj2;
	p=&obj1;
	p->f1();
	p->f2();
	//obj2.f2(10);
	//obj2.f1();
//	obj2.f2();
}
