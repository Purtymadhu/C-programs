#include<iostream>
#include<conio.h>
using namespace std;
long fact(int n);
int main()
{
	int num;
	cout<<"Enter a positive number";
	cin>>num;
	cout<<"factorail of a number is :"<<fact(num);
}
long fact(int n)
{
	if (n==0)
		return 1;
	else
	return(n*fact(n-1));
}
