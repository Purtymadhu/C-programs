#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20]=" welcome";
	char str2[20]="madhu";
	strcat(str2,str1);
	cout<<"concatination of two string is done:"<<str2;
	return 0;
}
