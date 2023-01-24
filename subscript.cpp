#include<iostream>
using namespace std;
class array
{
	int A[10];
	public:
		array()
		{
			for(int i=0;i<=9;i++)
			{
				A[i]=i;
			}
		}

int operator [](int k)
{
	return (A[k]);
}
};
int main()
{
	array obj;
	cout<<obj[5];
}
