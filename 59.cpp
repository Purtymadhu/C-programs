#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int (*a)[4];
	int i,j,rows;
	printf("enter number of rows:");
	scanf("%d",&rows);
	a=(int(*)[4])malloc(rows*4*sizeof(int));
	for(i=0;i<rows;i++)
	for(j=0;j<4;j++)
	{
		printf("enter [%d][%d]:=",i,j);
		scanf("%d",a[i][j]);
	}
	printf(" the matrix is:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<4;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	free(a);
	 
}
