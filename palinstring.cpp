#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	char c;
	cout<<"Enter a string";
	cin>>str;
	c=strrev(str);
	if(str==c)
	{
		cout<<"string is palindrom";
	}
	else
	{
		cout<<"string is not palindrom:";
	}
	return 0;
}
