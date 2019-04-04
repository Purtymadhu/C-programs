#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
	for(j=i+1;j<=n-1;j++)
	if(a[i] > a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for (i=0;i<n;i++)
	printf("\n %d",a[i]);
	return 0;
}
