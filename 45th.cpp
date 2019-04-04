#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int arr[5]={5,10,15,20,25};
	for(i=0;i<5;i++)
	{
		printf("value of arr[%d]=%d\t",i,*(arr+i));
		printf("address of arr[%d]=%p\n",i,arr+i);
	}
}
