#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		A()
		{
			cout<<"enter two number:";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"addition of two number is:"<<a+b<<endl;
			cout<<"multiplication of two number is:"<<a*b<<endl;
			cout<<"substraction of two number is:"<<a-b<<endl;
			cout<<"division of two numbre is:"<<a/b<<endl;
		}
};
int main()
{
	A obj;
	obj.display();
	return 0;
}
