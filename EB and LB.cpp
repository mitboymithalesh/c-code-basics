#include<iostream>
using namespace std;
class A
{
	public:
		void f1()
		{
			cout<<"A f1\n";
		}
		void f2()
		{
			cout<<"A f2\n";
		}
		virtual void f3()
		{
			cout<<"A f3\n";
		}
		virtual void f4()
		{
			cout<<"A f4\n";
		}
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"B f1\n";
		}
		void f2()
		{
			cout<<"B f2\n";
		}
		void f3()
		{
			cout<<"B f3\n";
		}
		void f4(int x)
		{
			cout<<"B f4";
		}
};
int main()
{
	A *p;
	B obj;
	p=&obj;
	p->f1();
	p->f2();
	p->f3();
	p->f4();
	obj.f1();
}
