#include<iostream>
using namespace std;

class A
{
	private:
		int x,y,z;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;
			z=x+y;
		}
	void display()
	{
		cout<<"sum of a and b is:"<<z<<endl;
	}
};
int main()
{
	A a(5,6);
	a.display();
	return 0;
}
