#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	int rollno;
	float marks;
};

int main()
{
	struct student stu1={"madhu",11,39};
	struct student stu2;
	stu2=stu1;
	printf("stu1: %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
	printf("stu2: %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
	return 0;
}
