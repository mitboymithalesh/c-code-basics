#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void setdata()
		{
			cin>>x;
		}
};
class B: protected A
{
	int y;
	public:
		void getdata()
		{
			cin>>y;
		}
		void show()
		{
			cout<<x<<y;
		}
};
int main()
{
	B obj;
//	obj.setdata();
	obj.getdata();
	obj.show();
}
