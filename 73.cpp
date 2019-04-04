#include<stdio.h>
#include<conio.h>
int sum(int x,int y); //function declaration;
int main()
{
	int a,b,s;
	printf("enter a value of a and b:");
	scanf("%d %d",&a,&b);
	s=sum(a,b);
	printf("sum of %d and %d is %d\n",a,b,s);
	return 0;
}
int sum(int x,int y)
{
//	int s;
	//s=x+y;
	return x+y;
}
