#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(n==1 || n==0)
	{
		cout<<"Not a even number:";
	}
	else if (n%2==0)
	{
	cout<<"Even number";
	}
	else
	{
		cout<<"not a even number";
	}
}

