
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
};
void display(char name[],int rollno,int marks);
int main()
{
	struct student stu1={"john",12,87};
	struct student stu2;
	strcpy(stu2.name,"marry");
	stu2.rollno=18;
	stu2.marks=90;
	display(stu1.name,stu1.rollno,stu1.marks);
	display(stu2.name,stu2.rollno,stu2.marks);
	return 0;
}
void display(char name[],int rollno,int marks)
{
	printf("name=%s\t",name);
	printf("rollno=%d\t",rollno);
	printf("marks=%d\n",marks);
}
