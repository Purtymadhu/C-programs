#include<stdio.h>// program for understanding array of pointers
#include<conio.h>
int main()
{
	int arr[4]={5,10,15,20};
	int i,*pa[4];
	for(i=0;i<4;i++)
	pa[i]=&arr[i];
	for(i=0;i<4;i++)
	{
		printf("address of pa[%d]=%p\t",i,pa[i]);
		printf("value of pa[%d]=%d\n",i,*pa[i]);
	}
}
