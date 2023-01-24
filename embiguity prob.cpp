#include<iostream>
using namespace std;
class A
{
	public:
	void fun()
	{
		cout<<"Hello Pavan";
	}
};
class B:public A
{
	public:
	void show()
	{
		cout<<"Class B";
	}
};
class C:public A
{
	public:
	void display()
	{
		cout<<"Class C";
	}
};
class D:public B,public C
{
	public:
/*	void fun()
	{
		cout<<"class D";
	}*/
};
int main()
{
	D obj;
	obj.B::fun();
}
