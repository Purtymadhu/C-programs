#include<iostream>
#include<string.h>
using namespace std;
struct Employee
{
	int emp_id;
	char emp_name[20];
	float salary;
}info[3];
int main()
{
	int i;
	cout<<"enter employee information is:";
	for(i=0;i<3;i++)
	{

		cout<<"enter employee id:";
		cin>>info[i].emp_id;
		cout<<"enter employee name:";
		cin>>info[i].emp_name;
		cout<<"enter employee salary:";
		cin>>info[i].salary;
		cout<<endl;
	}
	cout<<"displaying information:"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"employee record is:"<<i+1<<endl;
		cout<"employee id is:"<<info[i].emp_id<<endl;
		cout<<"employee name is:"<<info[i].emp_name<<endl;
		cout<"employee salary is:"<<info[i].salary;
	}
	return 0;
}
