#include<iostream>
using namespace std;
float fun(float x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y>0)
	{
		x=x*fun(x,y-1);
	}
	else
	{
		x=1/x*fun(x,-y-1);
		//float z=1/x;
	//	return z;
	}
}
int main()
{
	float m;
	int n;
	cin>>m;
	cin>>n;
	float a;
	a=fun(m,n);
	cout<<a;
}
