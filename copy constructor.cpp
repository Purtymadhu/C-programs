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
	int p,q;
	cout<<"enter two number:";
	cin>>p>>q;
	A a(p,q);
	A a2(a);
	a2.display();
	
	return 0;
}
