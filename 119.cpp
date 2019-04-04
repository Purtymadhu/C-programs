#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("enter a string:");
	gets(str);
	strlwr(str);
	printf("lower case string is %s",str);
	return 0;
}
