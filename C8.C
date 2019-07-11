#include<stdio.h>
#include<conio.h>
void main()
  {
     int a,b,i;
     clrscr();
     printf("Enter A table number");
     scanf("%d",&a);
      for(i=1;i<=10;i++)
	{
	  printf("\n %d*%d=%d",a,i,a*i);
	}
     getch();

  }