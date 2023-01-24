#include<iostream>
using namespace std;
class emp
{
	private : int eno;
	char ename[10];
	public:
		friend void operator >>(istream &in, emp&e)
		{
			cout<<"enter eno and ename \n";
			in>>e.eno>>e.ename;
		}
		friend void operator <<(ostream &out, emp&e)
		{
			out<<"\n eno= "<<e.eno;
			out<<"\n ename= "<<e.ename;
		}
};
int main()
{
	emp e;
	cin>>e;
	cout<<e;
}
