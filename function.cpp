#include<iostream>
using namespace std;
int add(int x,int y);
int main()
{
	int a,b,c;
	cout<<"enter two number:";
	cin>>a>>b;
	c = add(a,b);
	cout<<"sum of two number is:"<<c;
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
