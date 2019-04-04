#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrupr(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		str[i]=str[i]-32;
	}
}
int main()
{
	char str[10];
	printf("Enter  a string :");
	gets(str);
	mystrupr(str);
	printf("upper case string is %s",str);
	return 0;
}
