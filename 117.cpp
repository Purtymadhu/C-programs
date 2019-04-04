#include<stdio.h>// strcat;
#include<conio.h>
#include<string.h>
int main()
{
	char s1[15];
	char s2[10];
	printf("enter a string for 1st s1",s1);
	gets(s1);
	printf("enter a string for 2nd s2",s2);
	gets(s2);
    strcat(s1, " ");
	strcat(s1,s2);
	printf("string is %s\n",s1);
//	puts(s2);
	return 0;
}
