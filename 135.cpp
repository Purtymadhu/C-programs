#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char name[100];
	fp=fopen("madhu.txt","w");
	if(fp==NULL)
	{
		printf("\n unable to create file:");
		return 1;
	}
	fprintf(fp,"welcome");
	fprintf(fp,"\n%d naresh it %d",10,20);
	fclose(fp);
	return 0;
}
