#include<stdio.h>
#include<conio.h>
void bubblesort(int a[],int n);
int main()
{
	int a[]={ 34,15,29,8};
	int i;
	bubblesort(a,4);
	for(i=0;i<=3;i++)
	printf("%d\n",a[i]);
}
void bubblesort(int a[],int n)
{
	int round,i,temp;
	for(round=1;round<=n-1;round++)
	for(i=0;i<=n-1-round;i++)
	if(a[i] > a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}
