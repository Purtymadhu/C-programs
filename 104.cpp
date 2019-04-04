#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3],arr2[3][3],i,j;
	printf("enter the elements of 1st matrix:\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  scanf("%d",&arr[i][j]);	
	}
	printf("entered matrix are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
		
	}
	/*for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		arr2[i][j]=arr[j][i];
	}*/
	printf("transpose of a matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arr[j][i]);
		printf("\n");
	}
	return 0;
}
