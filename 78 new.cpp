#include<stdio.h>
#include<conio.h>
long int factorial(int n);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("no factorial of negative number:\n");
	}
	else
	{
		printf("factorial of %d is %d\n",num,factorial(num));
		return 0;
	}
}
long int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
