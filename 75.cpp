#include<stdio.h>
#include<conio.h>
void selection(int age,float ht);
int main(void)
{
	int age;
	float ht;
	printf("enter age and height of a person:");
	scanf("%d %f",&age,&ht);
	selection(age,ht);
	return 0;
}
void selection(int age,float ht)
{
	if(age>25)
	{
		printf("eligible for marriage:");
		return ;
	}
	if(ht<5)
	{
		printf("height should be greater than 5:");
		return;
	}
	printf("selected:\n");
}
