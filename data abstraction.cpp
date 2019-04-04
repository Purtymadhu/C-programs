#include<iostream>
using namespace std;

class A
{
	private:
		int x;
	public:
		A(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<"value of x is:"<<x;
		}
};
int main()
{
	A a(5);
	a.display();
	
	return 0;
}
