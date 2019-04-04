#include<stdio.h>// call  by value;
#include<conio.h>
void value(int x,int y);
int main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	value(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void value(int x,int y)
{
	int m,n;
	m=x*y;
	n=y*x;
	printf("x=%d,y=%d\n",m,n);
}
