#include<iostream>
#include<string.h>
using namespace std;
class Dog
{
	string name;
	string breed;
	char gender[1];
	int age;
	public:
		Dog()
		{
			strcpy("FIDO",name);
			strcpy("UNKNOWN",breed);
			gender[1]='F';
			age=1;
		}
		bool Isold()
		{
			if(age>10)
			{
			return 0;
			}
			else
			return 1;
		void show()
		{
			cout<<"Name="<
			gets(name)
			cout<<"\nBreed="
			gets(breed);
			cout<<"\nGender="<<gender<<"\Age="<<age;
		}
};
int main()
{
	Dog Mydog;
	Mydog.show();
//	bool k=(Mydog.Isold());
//	cout<<k;
}
