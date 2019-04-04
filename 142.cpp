#include<stdio.h>
#include<conio.h>
int min(int A[],int k,int N)
{
	int j,loc,MIN;
	MIN=A[k];
	loc=k;
	for(j=k+1;j<N-1;j++)
	if(MIN > A[j])
	{
		MIN=A[j];
		loc=j;
	}
	return loc;
}
int main()
{
	int A[]={ 33,11,66,88,99,77,44,55,22,1};
	int loc,k,temp;
	for(k=0;k<=8;k++)
	{
		loc=min(A,k,10);
		temp=A[k];
		A[k]=A[loc];
		A[loc]=temp;
	}
}
