#include<stdio.h>
#include<conio.h>
void insertionsort(int [],int);
int main()
{
	int i;
	int a[]={34,45,11,89,55,19,22,8,40};
	insertionsort(a,9);
	for(i=0;i<=8;i++)
	printf("%d\t",a[i]);
}
void insertionsort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--)
		a[j+1]=a[j];
		a[j+1]=temp;
	}
}
