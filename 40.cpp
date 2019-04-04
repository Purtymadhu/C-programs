#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	int *ptr;
	ptr=&a;
	a=10;
	b=20;
	printf("\n %d %d %d",a,b,*ptr);
	*ptr=30;
	ptr=&b;
	*ptr=40;
	printf("\n %d %d %d",a,b,*ptr);
}
