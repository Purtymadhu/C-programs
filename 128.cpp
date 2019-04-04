#include<stdio.h>
#include<conio.h>
struct student
{
 char name[100];
 int rollno;
 float marks;
};
int main(void)
{
	int i;
	struct student stuarr[3];
	for(i=0;i<3;i++)
	{
		printf("enter name, roll and marks of a student stuarr[%d]:\n",i);
		scanf("%s %d %f",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
		printf("\n");
		
	}
	printf("name\t roll\t marks\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t %d\t %.2f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
		printf("\n");
	}
}
