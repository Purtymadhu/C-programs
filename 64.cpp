#include<stdio.h>
#include<conio.h>
void xyz()
{
	int a=10;
	++a;
	printf("\n value of a =%d",a);
}
int main()
{
	auto int a=5;
	++a;
	xyz();
	xyz();
	xyz();
	++a;
	printf("\ a =%d",a);
}
