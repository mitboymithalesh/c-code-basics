#include<iostream>
using namespace std;
class A
{
	public:
	void f1()
	{
		cout<<"f1 in A\n";
	}
	virtual void f2()
	{
		cout<<"f2 in A\n";
	}
	virtual void f3()
	{
		cout<<"f3 in A\n";
	}
	virtual void f4()
	{
		cout<<"f4 in A\n";
	}
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"f1 in B\n";
		}
		void f2()
		{
			cout<<"f2 in B\n";
		}
		void f4(int x)
		{
			cout<<"f4 in B\n";
		}
};
int main()
{
	A o1,*p;
	B o2;
	p=&o2;
	p->f1();
	p->f2();
	p->f3();
	p->f4();
}
