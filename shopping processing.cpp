#include<iostream>
using namespace std;
const int m =50;
class Items
{
	int itemcode[m];
	float itemprice[m];
	int count;
	public:
		void cnt(void)
		{
			count=0;
		}
		void getitem(void);
		void displaySum(void);
		void remove(void);
		void displayitem(void);
};
void Items::getitem(void)
{
	cout<<"enter item code:";
	cin>>itemcode[count];
	cout<<"enter item price:";
	cin>>itemprice[count];
	count++;
}
void Items::displaySum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	{
		sum=sum+itemprice[i];
		cout<<"\n Total value:"<<sum<<endl;
	}
}
void Items::remove(void)
{
	int a;
	cout<<"enter an item code to be removed:";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if(itemcode[i]==a)
		itemprice[i]=0;
	}
}
void Items::displayitem(void)
{
	cout<<"\ncode price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<"\n"<<itemprice[i];
	}
	cout<<endl;
}
int main()
{
	Items order;
	order.cnt();
	int x;
	do
	{
		cout<<"yo can do the following :";
		cout<<"enter appropiriate number:"<<endl;
		cout<<"\n1 : add an item:";
		cout<<"\n2 : display total value:";
		cout<<"\n3 : delete an item:";
		cout<<"\n4 : display all item:";
		cout<<"\n5 : quit";
		cout<<"\n\nWhat is your option:";
		cin>>x;
		switch(x)
		{
			case 1: order.getitem();break;
			case 2: order.displaySum();break;
			case 3: order.remove();break;
			case 4: order.displayitem();break;
			case 5: break;
			default: cout<<"error in input; try again\n";
			
		}
	}while(x!=5);
	return 0;
}

