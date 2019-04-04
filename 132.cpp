#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
};
void display(struct student);
int main()
{
	struct student stu1={" merry",12,67};
	struct student stu2;
	strcpy(stu2.name,"john");
	stu2.rollno=11;
	stu2.marks=45;
	display(stu1);
	display(stu2);
	return 0;
}
void display(struct student stu)
{
	printf("name %s\t",stu.name);
	printf("rollno %d\t",stu.rollno);
	printf("marks %d\n",stu.marks);
}
