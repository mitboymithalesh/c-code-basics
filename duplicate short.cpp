#include<iostream>
using namespace std;
int main()
{
	int a[15];
	for(int i=0;i<15;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<15;i++)
	{
		for(int j=i+1;j<15;j++)
		{
			if(a[i]==a[j])
			{
				cout<<" "<<a[j];
				break;
			}
		}
	}
}
/*	for(m=0;m<10;m++)
	{
	for(int n=m+1;n<=10;n++)
		{
			if(s[m]!=s[n])
			cout<<" "<<s[m];
			break;
		}
	}*/

