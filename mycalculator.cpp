#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1,num2;
	cout<<"Enter operator either + or - or * or /:";	
	cin>>op;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	switch(op)
	{
		case '+':
			cout<<"sum of two number is:"<<num1+num2;
			break;
		case '-':
			cout<<"substraction of two number is:"<<num1-num2;
			break;
		case '*':
			cout<<"multiplication of two number is:"<<num1*num2;
			break;
		case '/':
			cout<<"division of two numbrer is:"<<num1/num2;
			break;
		default: cout<<"not match from our calculator";
			break;
	}
	return 0;
}
