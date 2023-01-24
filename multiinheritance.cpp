#include<iostream>
using namespace std;
class Base {
public:
int x;
void read1()
{
	cin>>x;
};
class D1:public Base {
public:
int y;
void read2()
{
    cin>>y;
};
};
class D2:public D1 {
public:
void add()
{
    cout<<x+y;
}
};
int main() {
D2 obj2;
obj2.read1();
obj2.read2();
obj2.add();
}
