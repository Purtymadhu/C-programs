#include<stdio.h>
#include<conio.h>
#include<math.h>
void printprime(int num1,int num2);
int isprime(int n);
int main()
{
	int num1,num2;
	printf("enter two number:");
	scanf("%d %d",&num1,&num2);
	printf("prime number between %d and %d are:\n",num1,num2);
	printprime(num1,num2);
	return 0;
}
void printprime(int num1,int num2)
{
	int i;
	for(i=num1;i<=num2;i++)
	if(isprime(i))
	printf("%d\n",i);
}
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
