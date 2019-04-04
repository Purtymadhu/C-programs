 #include<stdio.h>
 #include<conio.h>
 void displaymenu(void);
 int main(void)
 {
 	int choice;
 	displaymenu();
 	printf("enter your choice:");
 	scanf("%d",&choice);
 	return 0;
 }
 void displaymenu(void)
 {
 	printf("1. createe database\n");
 	printf("2. insert new record:\n");
 	printf("3. modify a record:\n");
 	printf("4. delete a record:\n");
 	printf("5. display a record:\n");
 	printf("6. exit\n");
	  }
