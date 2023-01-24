#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter any Number between 1 and 3";
	cin>>x;
	try
	{
		if(x==1)
		{
			throw 'A';
		}
		else if(x==2)
		{
			throw 2;
		}
		else 
		{
			throw 5.1;
		}
	}
	catch(int a)
	{
		cout<<"Integer";
	}
	catch(char p)
	{
		cout<<"Character";
	}
	catch(float x)
	{
		cout<<"Float";
	}
	cout<<"\nHI";
}
