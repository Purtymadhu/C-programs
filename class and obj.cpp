#include<iostream>
using namespace std;

class Madhu
{
	private:
		int num1,num2;
	public:
		getdata()
		{
			cout<<"enter two number:";
			cin>>num1>>num2;
		}
		putdata()
		{
			int num3;
			num3=num1+num2;
			cout<<"sum of two number is:"<<num3;
		}
};
int main()
{
	Madhu n1;
	n1.getdata();
	n1.putdata();
	return 0;
}
