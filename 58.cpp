#include<stdio.h>//dynamic array;
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p,n,i;
	printf("enter an number of integer to be stored:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory is not associated:");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter an integer:");
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	printf("%d\t",p[i]);
	return 0;
}
