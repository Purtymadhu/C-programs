#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr=new int;
	cout<<"Enter value of ptr:"<<endl;
	cin>>*ptr;
	cout<<"value of ptr is:"<<*ptr<<endl;
	delete ptr;
	return 0;
	
}
