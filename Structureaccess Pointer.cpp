#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
	int emp_id;
	char emp_name[20];
	float salary;
}info;
int main()
{
	struct employee *ptr;
	ptr=&info;
	ptr->emp_id=1;
	strcpy(ptr->emp_name,"madhu");
	ptr->salary=20000;
	cout<<"employee id is:"<<ptr->emp_id<<endl;
	cout<<"employee name is:"<<ptr->emp_name<<endl;
	cout<<"employee salary is:"<<ptr->salary;
	return 0;
}
