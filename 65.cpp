#include<stdio.h>
#include<conio.h>
void abc()
{
	int a=5;
	static int s=5;
	++a;
	++s;
	printf("\n %d %d",a,s);
}
int main()
{
	abc();
	abc();
	abc();
}
