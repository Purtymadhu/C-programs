#include<iostream>
using namespace std;
int main()
{
	int a,*ptr,b;
	cout<<"enter a number:";
	cin>>a;
	ptr=&a;
	b=*ptr;
	cout<<"value of a is:"<<a<<endl;
	cout<<"address of a is:"<<ptr<<endl;
	cout<<"accessed value through pointer is:"<<b;
	
}
