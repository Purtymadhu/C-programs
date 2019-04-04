#include<iostream>
using namespace std;

class item
{
	private:
		int first;
		float second; //data member
	public:
		void getdata(int a,float b)
		{
			int z;
			first=a;
			second=b;
			z=a+b;
			cout<<"sum of two number is:"<<z<<endl;
		}
};
/*void item::getdata(int a ,float b)//use scope resolution
{
	number=a;
	cost=b;
}*/
int main()
{
	item x; //create object
	int c,d;
	cout<<"enter two number:";
	cin>>c>>d;
	x.getdata(c,d);
	return 0;
}
