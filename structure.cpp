#include<iostream>
#include<string.h>
using namespace std;
struct Employee
{
	int emp_id;
	char emp_name[20];
	float emp_salary;
}info;
int main()
{
	info.emp_id=1;
	strcpy(info.emp_name,"madhu");
	info.emp_salary=2000;
	cout<<"employee id is:"<<info.emp_id<<endl;
	cout<<"employee name is:"<<info.emp_name<<endl;
	cout<<"employee salary is:"<<info.emp_salary;
	return 0;
}

