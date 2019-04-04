#include<iostream>
using namespace std;

namespace ns1
{
	void show()
	{
		cout<<"name space 1:"<<endl;
	}
	namespace ns2
	{
		void show()
		{
			cout<<"namespace 2:"<<endl;
		}
	}
}
using namespace ns1::ns2;
int main()
{
	show();
	
	return 0;
}
