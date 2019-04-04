#include<stdio.h>
#include<conio.h>
int main()
{
	int x=10,y=5,z=20,min;
	min=x<y && x<z? x:y<z? y:z;
	printf("min value=%d",min);
	}
