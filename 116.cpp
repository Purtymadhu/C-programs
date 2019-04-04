#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter a string:\n");
	gets(str);
	strrev(str);
	printf("reverse of a string is:%s",str);
	return 0;
}
