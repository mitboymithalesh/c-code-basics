#include<iostream>
#include<string>
using namespace std;
class Human {
	public:
		string name;
		void intro(){
			cout<<"hello iam "<<name<<endl;
			
		}
};
int main(){
	Human *pavan= new Human();
	pavan->name="pavan";
	pavan->intro();
}
