#include<stdio.h>
#include<conio.h>
void check(int num);
int main()
{
	int arr[10],i;
//	printf("enter the array elements:");
	for(i=0;i<10;i++)
	{
		
		printf("enter the array elements");
		scanf("%d",&arr[i]);
		check(arr[i]);
		 break;
	}
	return 0;
}
void check(int num)
{
	if(num%2==0)
	printf(" %d is even:\n",num);
	else
	printf("%d is odd:\n",num);
}
