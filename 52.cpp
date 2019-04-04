//passing 2-d array to a functions
#include<stdio.h>
#include<conio.h>
int func(int (*a),[4]);
int main()
{ 
	int i,j,arr[3][4]={  { 10,11,12,13},{ 20,21,22,23},{30,31,32,33},};
	printf("inside main(): sizeof(arr)=%u\n",sizeof(arr));
	func(arr);
	printf("contents of array after calling func() are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",arr[i][j]);
		printf("\n");
	}
	return 0;
}
int func(int (*a)[4])
{
	int i,j;
	printf("inside func(): sizeof(a)=%u\n",sizeof(a));
	printf("inside func(): sizeof(*a)=%u\n",sizeof(*a));
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	a[i][j]=a[i][j]+2;
}
