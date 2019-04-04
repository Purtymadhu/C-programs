#include<iostream>
using namespace std;
class employee
{
	char name[30];
	int age;
	public:
		void getdata(void);
		void putdata(void);
		
};
void employee::getdata(void)
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
}
void employee::putdata(void)
{
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
}
const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nDetails of manager is:"<<i+1<<endl;
		manager[i].getdata();
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\n manager"<<i+1<<endl;
		manager[i].putdata();
	}
	return 0;
}
