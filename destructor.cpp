#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A(int x)
		{
		a=x;
		cout<<"constructor is created:"<<endl;	
		}
		~A()
		{
			cout<<"destructor is deleted:"<<endl;
		}
		void show()
		{
			cout<<"value of a is:"<<a<<endl;
		}
};
int main()
{
	A a1(5);
	a1.show();
	return 0;
}
