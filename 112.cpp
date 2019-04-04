#include<stdio.h>
#include<conio.h>
void abc(char *ptr)
{
	puts(ptr);
	if(*ptr)
	abc(ptr+1);
	puts(ptr);
}
int main()
{
	char str[]="hello";
	abc(str);
	return 0;
}
