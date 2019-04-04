#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	
	
	char fname[20];
	int i;
//	clrscr();
//	printf("enter a file:");
//	gets(fname);
	fp=fopen("madhu.txt","a");
	if(fp==NULL)
	{
		printf("\n unable to fetch file:");
		getch();
		return 1;
	}
	for(i=1;i<=127;i++)
	fprintf(fp,"%d=%c\t",i,i);
	fclose(fp);
	return 0;
}
