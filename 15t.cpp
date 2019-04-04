#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter a  value:");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("\n %d*%d=%d",n,i,n*i);
		i=i+1;
	}
}
