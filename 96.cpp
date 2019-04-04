#include<stdio.h>
#include<conio.h>
int main() 
{
	int i,j=9,temp,arr[10];
	for(i=0;i<10;i++)
	{
		printf("enter a value to be entered in an array[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<j;i++,j--)
	{
	    	temp=arr[i];
	    	arr[i]=arr[j];
	    	arr[j]=temp;
	}
	printf("after reversing the array is:=");
	for(i=0;i<10;i++)
	printf("%d\t",arr[i]);
	//printf("\t");
	return 0;
}
