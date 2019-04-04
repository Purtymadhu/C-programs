//perfect no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a value:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n && n!=0)
	printf("\n %d perfect number",n);
	else
	printf("\n %d not perfect number",n);
}
