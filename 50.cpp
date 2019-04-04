//returning more than one value from  a function
#include<stdio.h>
#include<conio.h>

void func(int x,int y,int *ps,int *pd,int *pp);
int main()
{
	int a,b,sum,diffrnc,prod;
	a=6;
	b=4;
	func(a,b,&sum,&diffrnc,&prod);
	printf("sum=%d\n, difference= %d\n, product of 2 num=%d\n",sum,diffrnc,prod);
	return 0;
	
}
void func(int x,int y,int *ps,int *pd,int *pp)
{
	*ps=x+y;
	*pd=x-y;
	*pp=x*y;
}
