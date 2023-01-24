#include<iostream>
using namespace std;
template<typename T>
T sort(T a[],int n)
{
	T temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
	int main()
	{
		int a[5]={10,20,5,7,2};
		float b[4]={5.2,19.3,3.5,4.5};
		sort(a,5);
		sort(b,4);
		for(int i=0;i<5;i++)
		{
			cout<<a[i]<<endl;
		}
		for(int j=0;j<4;j++)
		{
			cout<<b[j]<<endl;
		}
	}
