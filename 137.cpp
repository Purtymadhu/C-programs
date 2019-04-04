#inc
lude<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("jaihind.txt","r");
	if(fp==NULL)
	{
		printf("\n file is not found:");
		return 1;
	}
	while(1)
	{
		fscanf(fp,"%c",&ch);
		if(feof(fp))
		break;
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
