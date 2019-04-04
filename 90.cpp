#include<stdio.h>
#include<conio.h>
 int g;
void abc()
{
	int a;
	static int s;
	a=s++;
	--g;
	printf("\n %d %d %d",a,s,g);
	
}
int main()
{
	void xyz();
	xyz();
}
void xyz()
{
	auto int a;
	static int s=5;
	a=--s;
	++g;
	printf("\n %d %d %d",a,s,g);
	if(a>=3)
	{
		abc();
		xyz();
	}
	printf("\n %d %d %d",a,s,g);
}
