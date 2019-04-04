//palindrom or not
#include<stdio.h>
#include<conio.h>
long int reverse(long int n);
int ispalindrom(long int num);
int main()
{
	long int num;
	printf("enter a number:");
	scanf("%ld",&num);
	if(ispalindrom(num))
	printf("number is a palindrom:\n");
	else
	printf("number is not palindrom:\n");
	return 0;
}
int ispalindrom(long int num)
{
	if(num==reverse(num))
	return 1;
	  return 0;
}
long int reverse(long int n)
{
	long int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
