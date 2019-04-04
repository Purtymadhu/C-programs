#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10],str2[10];
	printf("enter a string :\n");
	gets(str);
	strcpy(str2,str);
	strrev(str2);
	if((strcmp(str,str2))==0)
	printf("string is palindrom",str);
	else
	printf("string is not palindrom:",str);
	return 0;
}
