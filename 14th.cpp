#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("enter 2 values:");
	scanf("%d %d",&n1,&n2);
	if(n1<=n2)
	{
		if(n1%2!=0)
		n1=n1+1;
		while(n1<=n2)
		{
			printf("%d",n1);
			n1=n1+2;
		}
	}
	else
	{
		if(n1%2==1)
		n1=n1-1;
		while(n1>=n2)
		{
			printf("%d",n1);
			n1=n1-2;
		}
	}
}
