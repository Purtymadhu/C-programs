#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct student stru1={ "marry",25,68};
	struct student stru2, stru3;
	strcpy(stru2.name,"john");
	stru2.rollno=26;
	stru2.marks=98;
	printf("enter name,rollno and marks for stru3:" );
	scanf("%s %d %f",&stru3.name,&stru3.rollno,&stru3.marks);
	printf("stru1: %s %d %.2f\n",stru1.name,stru1.rollno,stru1.marks);
	printf("stru2: %s %d %.2f\n",stru2.name,stru2.rollno,stru2.marks);
	printf("stru3: %s %d %.2f\n",stru3.name,stru3.rollno,stru3.marks);
	return 0;
}
