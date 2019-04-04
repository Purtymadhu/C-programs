#include<stdio.h>//void pointer
#include<conio.h>
int main()
{
	int i;
	float f;
	char ch;
	void *ptr;
	ptr=&i;
	i=10;
	printf("value of i=%d\n",i,*(int *)ptr);
	ptr=&f;
	f=12.3;
	printf("value of f=%f\n",f,*(float *)ptr);
	ptr=&ch;
	ch='A';
	printf("value of char ch =%c\n",ch,*(char *)ptr);
}
