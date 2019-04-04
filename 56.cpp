//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p,n,i;
	printf("enter the numbers of integer to be entered:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory is not sufficient");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter an integer:");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	return 0;
}
