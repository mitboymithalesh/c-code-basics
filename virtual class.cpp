#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"Class A";
		}
};
class B : public A
{
	public:
		int x=10;
		
};
class C :public A
{
	public:
		void fun()
		{
			cout<<"C";
		}
};
class D:public B,public C
{
	public:
	void display()
	{
		A obj;
		cout<<"Hi\n";
		obj.show();
	}
};
int main()
{
	D obj;
	obj.display();
}
