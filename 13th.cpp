#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	printf("enter a value:");
	scanf("%d",&n);
	if(n>0)
	{
		i=0;
		j=1;
		printf("%d\n %d\n",i,j);
		k=i+j;
		while(k<=n)
		{
		//	printf("%d\n",k);
			i=j;
			j=k;
			k=i+j;
		}
	}
}
