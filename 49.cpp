//call by refrence;
#include<stdio.h>
#include<conio.h>
void ref(int *p,int *q);
int main()
{
	int a,b;
	printf("enter a values of a and b:");
	scanf("%d %d",&a,&b);
	ref(&a,&b);
	printf("value of a =%d, value of b=%d\n",a,b);
	return 0;
}
void ref(int *p, int *q)
{
	(*p)++;
	(*q)++;
	printf("value of p=%d,value of q=%d\n",*p,*q);
	
}
