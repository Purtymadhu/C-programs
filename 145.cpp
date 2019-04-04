#include<stdio.h>//linear search
#include<conio.h>
void seqsearch(int a[],int n,int item)
{
	int flag=1,i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==item)
		{
			flag=0;
			printf("search successful:");
		}
	}
	if(flag==1)
	{
		printf("search unsuccessful:");
	}
}
int main()
{
	int a[100],i,m,item;
	printf("enter the number of elements:\n");{
	scanf("%d",&m);}
	printf("enter numbers:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);}
		printf("enter the no to be searched:");{
		scanf("%d",&item);
	}
	seqsearch(a,m,item);
	return 0;
}
