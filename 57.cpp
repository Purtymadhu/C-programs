#include<stdio.h>// realloc function 
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,*ptr;
	ptr=(int *)malloc(5 *sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not available:");
		exit(1);
	}
	for(i=0;i<5;i++)
        *(ptr+i)=i*2;
        ptr=(int *)realloc(ptr,9 * sizeof(int)); //allcated for 4 more intergers;
        if(ptr==NULL){
        	printf("memory is not specifies:");
        	exit(1);
		}
		for(i=5;i<9;i++)
		*(ptr+i)=i*10;
		for(i=0;i<9;i++)
		printf("%d",*(ptr+i));
		return 0;
}
