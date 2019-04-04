#include<iostream>
using namespace std;
int main()
{
	int num,i;
	int count=0;
	cout<<"enter a number:";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
		
	}
	if(count==0)
	{
		cout<<"number is prime";
	}
	else
	{
		cout<<"number is not prime";
	}
}
