#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw 1;
		}
		else 
		{
			throw b;
		}
	}
	catch(int x)
	{
		cout<<"Value has been changed";
		b=x;
	}
	cout<<"\nDivision is :"<<a/b;
}
