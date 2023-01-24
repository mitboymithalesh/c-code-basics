#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	try
	{
		try
		{
			throw x;
		}
		catch(int p)
		{
			throw p;
		}
		catch(int a)
		{
			cout<<"Hi";
		}
	}
	catch(int a)
	{
		cout<<a;
	}
}
