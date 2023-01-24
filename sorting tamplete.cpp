#include<iostream>
using namespace std;
template<class T>
T sort(T a[],int n)
{
	T temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
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
	int arr[5]={10,20,14,16,12};
	float arr2[4]={1.2,2.5,2.1,3.4};
	sort<int>(arr,5);
	sort<float>(arr2,4);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	for(int j=0;j<4;j++)
	{
		cout<<arr2[j]<<"\t";
	}
}
