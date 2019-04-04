#include<stdio.h>
#include<conio.h>
void xyz(); //global declaration;
void abc()
{
	printf("\n welcome in abc");
	xyz();
}
int main()
{
	printf("\n welcome in main");
	xyz();
	abc();
}
void xyz()
{
	printf("\nwelcome in xyz:");
}
