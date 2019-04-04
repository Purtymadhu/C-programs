#include<stdio.h>
#include<conio.h>
void binarysearch(int a[],int N,int item);
int main()
{
	int a[]={3,11,12,25,35,4,54,56,66,77,89,90};
	int item=89;
	binarysearch(a,12,item);
}
void binarysearch(int a[],int n,int item)
{
	int l=0,u=n-1,m;
	while(l<=u)
	{
	  m=(l+u)/2;
	  if(item==a[m])
	  {
	  	printf("search is successful at index %d,item found",m);
	  	return;
	  }
	  else if(item>a[m])
	  l=m+1;
	  else
	  u=m-1;
	}
	printf("search is unsuccessfuL ");
}
