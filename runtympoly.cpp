#include<iostream>
using namespace std;

class A
{
	public:
		void virtual show()=0;
		
};
class B:public A
{
	public:
		void show()
		{
			cout<<"Hello world:"<<endl;
		}
};
class C: public A
{
	public:
		void show()
		{
			cout<<"Hello friend:"<<endl;
		}
};
int main()
{
	A *ptr;
	B b;
	C c;
	ptr=&b;
	ptr->show();
	ptr=&c;
	ptr->show();
	
	return 0;
}
