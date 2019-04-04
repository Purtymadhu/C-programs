#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("enter first  string:\n");
	gets(s1);
	printf("enter second string:\n");
	gets(s2);
	if((stricmp(s1,s2))==0)
	printf("string are same:\n");
	else
	printf("strings are not same\n");
	return 0;
}
