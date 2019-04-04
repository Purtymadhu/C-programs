#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="welcome Friends";
	char *ptr;
	ptr=strchr(str,'F');
	cout<<"first occurence of a given character is:"<<ptr;
	return 0;
}
