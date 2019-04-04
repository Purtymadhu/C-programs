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
		cout<<"sum of x and y is:"<<z<<endl;
	}
};
int main()
{
	int b,c;
	cout<<"enter two number:";
	cin>>b>>c;
	A a(b,c);
	a.display();
	return 0;
}
