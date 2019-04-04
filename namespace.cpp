#include<iostream>
using namespace std;

namespace ns1
{
	void show(int x)
	{
		int a=x;
		cout<<"namespace 1"<<endl;
		cout<<"value of a is:"<<a<<endl;
	}
	
}
namespace ns2
{
	void show()
	{
		cout<<"namespace 2:"<<endl;
	}
}
int main()
{
	ns1::show(5);
	ns2::show();
	
	return  0;
}
