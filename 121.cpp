#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrlwr(char *str)
{
	while(* str!='\0')
	{
		if(*str>='A' && *str<='Z')
		*str=*str+32;
		++str;
	}
}
int main()
{
	char str[10];
	printf("enter a string :");
	gets(str);
	mystrlwr(str);
	printf("\n lower case string is = %s",str);
	return 0;
}
