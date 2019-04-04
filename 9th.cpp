#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,max;
	printf("enter four values:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		max=a;
	}
	else
	{
		if(b>c && b>d)
		{
			max =b;
		}
		else
		{
			if(c>d)
			max=c;
			else
			max=d;
		}
	}
printf("max value=%d",max);
}
