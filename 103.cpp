#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3][3],arr2[3][3],arr3[3][3],i,j,k;
	printf("enter element of 1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("enter element of 2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr2[i][j]);
	}
	for(i=0;i<3;i++)
			for(j=0;j<3;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<3;k++)
			arr3[i][j]+=arr[i][k]*arr2[k][j];
	}
	
		printf("multiplication of matrix is:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%d\t",arr3[i][j]);
			printf("\n");
		}
		return 0;
}
