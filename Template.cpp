#include<iostream>
using namespace std;
template<class A>
void fun(A x,A y)
{
	cout<<(x+y);
}
int main()
{
	fun(10,20);
	cout<<endl;
	fun(10.10,10);
}
