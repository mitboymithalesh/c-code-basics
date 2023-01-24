#include<iostream>
using namespace std;
template<class X>
class Arraylist
{
	private:
		struct ControlBloks{
		int capacity;
		X *arr_ptr;	
		};
		ControlBloks *s;
		public:
			Arraylist(int capacity)
			{
				s=new ControlBloks;
				s->capacity=capacity;
				s->arr_ptr=new X[s->capacity];
			}
			void addElement(int index,X data)
			{
				if(index>=0&&index<=s->capacity-1)
				{
					s->arr_ptr[index]=data;
				}
				else
				cout<<"\nArray index is not valid";
			}
			void viewElement(int index,X &data)
			{
				if(index>=0&&index<=s->capacity-1)
				{
					data=s->arr_ptr[index];
				}
				else
				cout<<"\nArray index is not valid";
			}
			void viewlist()
			{
				int i;
				for(i=0;i<s->capacity;i++)
				{
					cout<<" "<<s->arr_ptr[i];
				}
			}
};
int main()
{
	Arraylist<int>list1(4);
	list1.addElement(0,32);
//	list2.addElement(1,55);
//	list2.addElement(2,40);
	list1.viewlist();
}
