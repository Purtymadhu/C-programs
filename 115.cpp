#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[]="welcome";
	int s,l;
	puts(str);
	l=strlen(str);
	s=sizeof(str);
	printf("length of a string is:%d\n",l);
	printf("size of a string is:%d\n",s);
	return 0;
}
