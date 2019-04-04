 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 struct student
 {
 	char name[20];
 	int rollno;
 	int marks;
 } *ptr ;
 	struct student stu={" marry",25,68};
    ptr=&stu;
 	printf("Name = %s\t",ptr->name);
 	printf("roll = %d\t",ptr->rollno);
 	printf("marks= %d\n",ptr->marks);
 	return 0;
 }
