#include<stdio.h>
#include<conio.h>
int alphacount(char str[])
{
	int count=0;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' )
		count++;
	}
	return count;
}
int main()
{
	char str[50];
	int r;
	printf("enter a string:");
	gets(str);
	r=alphacount(str);
	printf("\n total alphabet count:=%d",r);
	return 0;
}
