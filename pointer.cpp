#include<iostream>
using namespace std;
int main()
{
	int a;
	int *ptr;
	cout<<"enter a value of a:";
	cin>>a;
	ptr=&a;
	cout<<"value of a :"<<a<<endl;
	cout<<"address of a:"<<&a<<endl;
	return 0;
}
