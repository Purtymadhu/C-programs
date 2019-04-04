#include<stdio.h>
#include<conio.h>
int main()
{
	char str[10]="abcdxyz";
	printf("\n %s",str);
	printf("\n %s",str+3);
	str[3]=0;
	printf("\n %s",str);
	str[3]='o';
	str[4]=100;
	printf("\n %s",str);
	str[4]='\0';
	printf("\n %s",str);
	getch();
	return 0;
}
