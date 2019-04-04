#include<iostream>
using namespace std;
int main()
{
	int a,i;
	int *ptr;
	cout<<"enter how many elements you want to be entered in an array:"<<endl;
	cin>>a;
	ptr=new int[a];
	cout<<"enter  "<<a<<"  elements:"<<endl;
	for(i=0;i<a;i++)
	{
		cout<<"Element"<<i<<" : ";
		cin>>ptr[i];
	}
	cout<<"Elements are:"<<endl;
	for(i=0;i<a;i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete []ptr;
	return 0;
}
