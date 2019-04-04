#include<stdio.h>
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
	printf("search unsuccessful");
}
int main()
{
	int a[]={22,11,44,77,88,55,99,33,66,1,100};
	seqsearch(a,11,66);
	
}
