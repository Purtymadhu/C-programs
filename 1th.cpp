#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n1,n2,n;
	printf(" enter 2 value:");
	scanf("%d %d",&n1,&n2);
	i=1;
	while(i<=10)
	{
		printf("\n");
		n=n1;
		while(n<=n2)

{
	printf("%4d*%2d=%2d",n,i,n*i);
	n=n+1;
	}	
	printf("sorry wrong choice");
}
}

