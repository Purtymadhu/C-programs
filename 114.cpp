#include<stdio.h> //strcpy;
#include<string.h>
#include<conio.h>
int main()
{
	char s1[10]="welcom";
	char s2[10]="hello";
	puts(s1);
	puts(s2);
	strcpy(s2,s1);
	puts(s1);
	puts(s2);
	return 0;
	
}
