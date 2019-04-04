#include<stdio.h>
#include<conio.h>
extern int g=9;
void abc()
{
	++g;
}
int main()
{
	++g;
	abc();
	printf("g=%d",g);
}


