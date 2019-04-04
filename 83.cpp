#include<stdio.h>//reverse number;
#include<conio.h>
int reverse(int n);
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
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
