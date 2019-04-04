#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[5];
	for(i=0;i<5;i++)
	{
		printf("Enter a value for arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		printf("\t");
	}
}
