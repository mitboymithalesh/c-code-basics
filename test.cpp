#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int k=0;k<10;k++)
	{
		cin>>a[k];
	}
	for(int i=0;i<9;i++)
	{
		int count=0;
		for(int j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count==1)
			{
				cout<<a[i];
			}
	}
}
