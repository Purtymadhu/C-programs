#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3],arr2[3][3],arr3[3][3],i,j;
	printf("enter element of 3*3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    scanf("%d",&arr[i][j]);
	}
	printf("show our 1st entered matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}
	printf("enter elements of 2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr2[i][j]);
	}
	printf("show our 2nd entered matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arr2[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		arr3[i][j]=arr[i][j]+arr2[i][j];
	
	}
    	printf("the resultant array of matrix is:\n");
    	for(i=0;i<3;i++)
    	{
    		for(j=0;j<3;j++)
    		printf("%d\t",arr3[i][j]);
    		printf("\n");
		}
	//	printf("\n");
		return 0;
}
