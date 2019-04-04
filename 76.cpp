//call by value:
#include<stdio.h>
#include<conio.h>
void func(int a,int b);
int main()
{
	int x=10,y=20;
	func(x,y);
	printf("value of x=%d,and value of y=%d\n",x,y);
	return 0;
}
void func(int a,int b){
a++;
b--;
printf("a=%d , b=%d\n",a,b);}
