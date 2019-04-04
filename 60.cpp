  #include<stdio.h>
  #include<conio.h>
  void xyz()
  {
  	printf("\n from xyz:");
  	
  }
  void abc()
  {
  	printf("\n from abc:");
  	xyz();
  }
  int main()
  {
  	printf("\n welcome in main:");
  	xyz();
  	abc();
  	printf("hello main");
  }
