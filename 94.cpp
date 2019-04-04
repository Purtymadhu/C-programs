#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[10],even,odd;
	for(i=0;i<10;i++)
	{
		printf("enter a value for arr[%d]",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
	     even=even+1;
		else
		odd=odd+1;
	}
	printf("even numbers =%d, odd number =%d\n",even, odd);
	return 0;	
}
