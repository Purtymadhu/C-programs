#include<stdio.h>
#include<conio.h>
void find(int n);
int main(void)
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	find(num);
	return 0;
}
void find(int n)
{
	if(n%2==0)
	{
		printf("%d is even\n",n);
	}
	else
	{
		printf("%d is odd\n",n);
	}
}
