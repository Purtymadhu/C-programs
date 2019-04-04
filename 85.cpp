//is prime or not;
#include<stdio.h>
#include<conio.h>
#include<math.h>
int isprime(int);
int main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=isprime(n);  
	
	if(result==1)
	printf("%d is prime:\n",n);
	else
	printf("%d is not prime:\n",n);
	return 0;
}
int isprime(int a)
{
	int i;
	for(i=2;i<=a-1; i++)
	{
	if(a%i==0)
	return 0;
	}
	if(i==a)
	return 1;
}
