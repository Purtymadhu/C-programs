#include<stdio.h>
#include<conio.h>
void func(int num,int b);
int main(void)
{
	int num,ch;
	printf("enter a decimal number:\n");
	scanf("%d",&num);
	printf("1. Binary\n2. octal\n3. hexadeciamal\n");
	printf("enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		printf("binary equivalent is:");
		func(num,2);
		break;
		case 2: 
		printf("octal equivalent is:");
		func(num,8);
		break;
		case 3: 
		printf("hexidecimal equivalent:");
		func(num,16);
		break;
	}
	printf("\n");
	return 0;
	}
	void func(int num,int b)
	{
		int i=0,j,rem;
		char arr[20];
		while(num>0)
		{
			rem=num%b;
			num/=b;
		}
			if(rem>9 && rem<16)
			{
			arr[i++]=rem-10+'A';}
			else
			{
			arr[i++]=rem+'o';
		}
		for(j=i-i;j>=0;j--)
		printf("%c",arr[j]);
	}
