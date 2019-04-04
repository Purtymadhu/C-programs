#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][4],i,j,arr2[4][3];
	printf("enter elements of 3 *4 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("entered our matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		arr2[i][j]=arr[j][i];
	}
	printf("transpose of a matrix is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arr2[i][j]);
		printf("\n");
	}
	return 0;
}
