#include<iostream>
using namespace std;
int main()
{
	int x;
	int n;
//	cin>>x>>n;
	int y=1;
	int i=1;
	while(i<=n)
	{
		y=x*y;
		i++;
	}
	cout<<"Value is "<<y;
}
