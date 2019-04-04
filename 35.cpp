#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	i=2;
	EVEN:
		printf("%d",i);
		i=i+2
		;
		if(i<=20)
		goto EVEN;
}
