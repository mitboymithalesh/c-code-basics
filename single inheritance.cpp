#include<iostream>
using namespace std;
class Base
{
public:
int x;
void fun1(){
	cout<<"this is base class"<<endl;
}
};
class Derived: public Base //single inheritance
{
public:
int y;
void fun2()
{
	cout<<"This is derived class";
}
};
int main()
{
Derived d;
d.fun1();
d.x=10;
d.fun2();
d.y;
}
