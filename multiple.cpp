#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"my name is madhu:"<<endl;
		}
};
class Base1
{
	public:
		void display2()
		{
			cout<<"my name is Madhu purty:"<<endl;
		}
};
class Derived:public Base, public Base1
{
	public:
		void display3()
		{
			cout<<"i am derived  class:"<<endl;
		}
};
int main()
{
	Derived d;
	d.display();
	d.display2();
	d.display3();
	return 0;
}
