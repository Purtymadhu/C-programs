#include<stdio.h>
#include<conio.h>
	union result
	{
		int marks;
		char grade;
		float per;
	}res;
	int main()
	{
	res.marks=90;
	printf("marks: %d\n",res.marks);
	res.grade='A'; 
	printf("grade : %d\n",res.grade);
	res.per=85.8;
	printf("percentage: %f\n",res.per);
}
