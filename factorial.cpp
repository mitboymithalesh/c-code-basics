#include<iostream>
using namespace std;
int fun(int a)
{
	if(a==0)
	{
		return 1;
	}
	if(a==1)
	{
		return a;
	}
	else 
	a=a*fun(a-1);
}
int main()
{
	int num1,num2,num3,val1,val2,val3;
	cout<<"Enter Any positive No";
	cin>>num1>>num2>>num3;
	try
	{
		if(num1<=0)
		{
			throw num1;
		}
	}
	catch(int a)
	{
		num1=-a;
	}
	val1=fun(num1);
	cout<<"Factorial is :"<<val1;
	val2=fun(num2);
	cout<<"\nFactorial is :"<<val2;
	val3=fun(num3);
	cout<<"\nFactorial is :"<<val3;
}
