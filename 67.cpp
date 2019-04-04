#include<stdio.h>
#include<conio.h>
extern int g=10;
void abc()
{
	--g;
}
void xyz()
{
	--g;
}
int main()
{
	--g;
	abc();
	xyz();
	printf("\n g=%d",g);
}
