#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"class A"<<endl;
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"class B"<<endl;
		}
};
int main()
{
	B b;
	A a;
	a.show();
	b.show();
	return 0;
}
