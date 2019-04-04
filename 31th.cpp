#include<stdio.h>
#include<conio.h>
int main()

{
	int a;
	a=0;
	while(a<=100)
	{
		a=a+2;
		if(a>=40 && a<=80)
		continue;
		printf("%d",a);
	}
}
