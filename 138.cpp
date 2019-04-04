#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char str[20];
//	char fname[20];
//	printf("enter a file name:");
//	gets(fname);
	fp=fopen("jaihind.txt","a");
	if(fp==NULL)
	{
		fprintf(stderr,"file not found");
		return 1;
	}
	printf("enter a string:");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	return 0;
}
