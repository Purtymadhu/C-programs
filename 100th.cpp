#include<stdio.h>
#include<conio.h>
void func(int val[]);
int main()
{
	int i,arr[6]={1,2,3,4,5,6};
	func(arr);
	printf("contents of array are: ");
	for(i=0;i<6;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
void func(int val[])
{
	int sum=0,i;
	for(i=0;i<6;i++)
	{
		val[i]=val[i]*val[i];
		sum+=val[i];
	}
	printf("sum of square is=%d\n",sum);
}
