#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[10]="abc";
char str2[10]="ABC";
int d;
d=stricmp(str,str2);
printf("ascii value diff = %d",d);
return 0;
}
