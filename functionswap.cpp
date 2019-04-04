#include<iostream>
using  namespace std;
int swap(int *x,int *y);
int main()
{
	int a,b;
	cout<<"enter two number:";
	cin>>a>>b;
	cout<<"before swapping two number is:"<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"value of a and b is:"<<a<<"\t"<<b;
}
int swap(int *x,int *y)

{
	int Temp;
	Temp=*x;
	*x=*y;
	*y=Temp;
	cout<<"after swapping two number is:"<<*x<<"\t"<<*y<<endl;
}
