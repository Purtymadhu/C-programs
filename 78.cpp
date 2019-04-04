#include<stdio.h>
#include<conio.h>
void fact(int n);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("factorial value=%d\n",n,fact(n));
}
void fact()
{
 int  fact=1,i;
	printf("enter a  number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	//printf("factorial value=%d\n",fact);
}

