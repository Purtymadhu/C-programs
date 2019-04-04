#include<iostream>
#include<conio.h>
using namespace std;
int add(int a, int b);
int add(int a,int b, int c);
int add(int a, double b);
int main()
{
	cout<<"sum of two number is :"<<add(5,7)<<endl;
	cout<<"sum of threee number is:"<<add(1,2,3)<<endl;
	cout<<"sum of two double number is:"<<add(5,2)<<endl;
	return 0;
}
int add(int a ,int b)
{
	return (a+b);
}
int add(int a ,int b ,int c)
{
	return (a+b+c);
}
int add(int a ,double b)
{
	return(a+b);
	
}
