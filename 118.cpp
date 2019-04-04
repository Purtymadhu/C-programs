#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[10];
printf("enter a string:");
gets(s1);
strupr(s1);
printf("upper case string is: %s",s1);
return 0;	
}
