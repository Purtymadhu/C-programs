#include<iostream>
using namespace std;
class Base
{
	public:
		void show()
		{
			cout<<"i am a base class:"<<endl;
		}
};
class derived1 : public Base
{
	public:
		void get()
		{
			cout<<"i am derived class:"<<endl;
		}
};
class derived2 : public derived1
{
	public:
		void display()
		{
			cout<<"i am also a derived class:"<<endl;
		}
};
int main()
{
	derived2 d;
	d.show();
	d.get();
	d.display();
	return 0;
}
