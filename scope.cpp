#include<iostream>
#include<string>
using namespace std;
class Human{
	public:
		string name;
		void intro();
};
void Human::intro()
{
	cout<< Human::name<<endl;
	
}
int main(){
	Human pav;
	pav.name="pavan";
	pav.intro();
}
