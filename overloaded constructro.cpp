#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
	public:
		A()
		{
			a=2;
			b=3;
		}
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"value of a is:"<<a<<endl;
			cout<<"value of b is:"<<b<<endl;
		}
};
int main()
{
	 A a1,a2(5,6);
	 cout<<"defalut constructor:"<<endl;
	 a1.display();
	 cout<<"parameterised constructor:"<<endl;
	 a2.display();
	 return 0;
}
