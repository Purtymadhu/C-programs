#include<iostream>
using namespace std;
class Student
{
	private:
		int stu_id;
		char stu_name[20];
		float marks;
	public:
		void getdata()
		{
			cout<<"enter student id:";
			cin>>stu_id;
			cout<<"enter student name:";
			cin>>stu_name;
			cout<<"enter student marks:";
			cin>>marks;
		}
		void display()
		{
			cout<<"student id is:"<<stu_id<<endl;
			cout<<"enter student name is:"<<stu_name<<endl;
			cout<<"enter student marks is:"<<marks<<endl;
		}
};
class Student1:public Student
{
	private:
		float height , weight;
	public:
		void getdata1()
		{
			cout<<"enter height of a student:";
			cin>>height;
			cout<<"enter weight of a student:";
			cin>>weight;
		}
		void display1()
		{
			cout<<"height of a student is:"<<height<<"feet"<<endl;
			cout<<"weight of a student is:"<<weight<<"kg"<<endl;
		}
};
int main()
{
	Student1 n1;
	cout<<" enter student details:"<<endl;
	n1.getdata();
	n1.getdata1();
	cout<<"Student details are:"<<endl;
	n1.display();
	n1.display1();
	return 0;
}
