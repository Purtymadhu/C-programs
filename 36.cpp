#include<stdio.h>// implicit typecasting- it is a concept of converting lower data type to higher data type;
#include<conio.h>
int main()
{
	int i=12345;
	long int l;
	l=(long)i;
	printf("%d %ld",i,l);
}
