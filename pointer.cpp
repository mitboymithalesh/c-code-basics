#include <iostream>
using namespace std;
int main() {
	int x=5;
	cout<<&x<<endl;
	int *ptr=&x;
	cout <<ptr<<endl;
	cout <<*ptr<<endl;
	*ptr=10;
	cout <<*ptr<<endl;
	cout<<x<<endl;
	
	int y;
	int *ptr2=&y;
	*ptr2=7;
	cout<<y;
	return 0;
}
