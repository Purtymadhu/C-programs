#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	printf("%d\n",reverse(num));
	return 0;
}
int reverse(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*0+n%10;
		n=n/10;f
	}
	return rev;
}
