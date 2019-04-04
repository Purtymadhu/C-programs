#include<stdio.h>
#include<conio.h>
void bubblesort(int arr[],int n);
int main()
{
	int arr[100],i,n;
	printf("enter how many number you want to be entered:\n");
	{
	scanf("%d",&n);
}
	printf("enter elements of an array:arr[%d]\n",i);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	for(i=0;i<=n;i++)
	printf("%d\t",arr[i]);
}
void bubblesort(int arr[],int n)
{
	int round,i,temp;
	for(round=1;round<=n-1;round++)
	for(i=0;i<=n-1-round;i++)
	if(arr[i] > arr[i+1])
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	
}
