#include<iostream>
using namespace std;
void func();
int func(int);
int func(int,int);
int func(int,float);
int func(int,float, int);

int main()
{
	int x=5;
	int y=66;
	float z=6.77;
	
	 func();
	 func(x);
	 func(x,y);
	 func(x,z);
	 func(x,z,y);
	return 0;
}
void func()
{
	cout<<"hello madhu:"<<endl;
}
int func(int a)
{
	cout<<"value of a is:"<<a<<endl;
}
int func(int a , int b)
{
	cout<<"value of a is:"<<a<<endl;
	cout<<"value of b is:"<<b<<endl;
}
int func(int a, float c)
{
	cout<<"value of a is:"<<a<<endl;
	cout<<"value of c is:"<<c<<endl;
}
int func(int a , float c, int b)
{
	cout<<"value of a is:"<<a<<endl;
	cout<<"value of c is:"<<c<<endl;
	cout<<"value of b is:"<<b<<endl;
}
