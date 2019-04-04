#include<iostream>
using namespace std;

class Mad
{
	private:
		int a;
		int b;
	public:
		Mad();
		void input();
		void display();
};
Mad::Mad()
{
	a=0;
	b=0;
}
void Mad:: input()
{
	cout<<"enter value of a:";cin>>a;
	cout<<"enter value of b:";cin>>b;
}
void Mad::display()
{
	cout<<"value of a is:"<<a;
	cout<<"value of b is:"<<b<<endl;
}
int main()
{
	Mad m;
	cout<<"value after intialization:";
	//m.display();
	m.input();
	m.display();
	return 0;
}
