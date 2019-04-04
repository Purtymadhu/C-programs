#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	int submarks[4];
};
int main()
{
	int i,j;
	struct student stuarr[3];
	for(i=0;i<3;i++)
	{
		printf("enter data for a student: %d\n",i+1);
		printf("enter name:");
		scanf("%s",&stuarr[i].name);
		printf("enter roll number:");
		scanf("%d",&stuarr[i].rollno);
		for(j=1;j<=4;j++)
		{
			printf("enter marks for subject %d:=",j+i);
			scanf("%d",&stuarr[i].submarks[j]);
		}
	}

	    
		printf("data of a student :\n");
		for(i=0;i<3;i++)
		{
			printf("name \t roll no \n");
			printf("%s\t %d\n",stuarr[i].name,stuarr[i].rollno);
		}
		printf("submarks of a student:\n");
		{
			for(j=1;j<=4;j++)
			printf("submarks \n");
			printf("%d\n",stuarr[i].submarks[j]);
		}
		
	return 0;
}
