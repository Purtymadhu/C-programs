#include<iostream>
using namespace std;

class Complex
{
	private:
		int a;
		int b;
	public:
		void getdata(int x=0, int y=0)
		{
			a=x;
			b=y;
		}
	Complex operator+(Complex c)
	{
		Complex com;
		com.a=a+c.a;
		com.b=b+c.b;
		return com;
	}
	void get()
	{
		cout<<"real number:"<<a<<endl;
		cout<<"imaginary number:"<<b<<endl;
		cout<<"Complex number is:"<<a<<" + "<<b<<"i";
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.getdata(5,10);
	c2.getdata(7,9);
	c3=c1+c2;
	c3.get();
	return 0;
}
