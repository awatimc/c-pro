       /*WRITE A 'C' PROGRAM TO READ THE NAME ,AGE AND PHONE NUMBER
	 FROM USER,STORE THEM IN VARIABLES AND DISPLAY THEM BACK*/


#include<stdio.h>
#include<conio.h>
void main()
   {
      int a,b;
      char name[20];
      clrscr();
      printf("\n Enter Your name :");
      scanf("%s",&name);
      printf("\n Enter A Age:");
      scanf("%d",&a);
      printf("\n Enter Phone number:");
      scanf("%d",&b);
      printf("\n The Name is %s",name);
      printf("\n The age is %d",a);
      printf("\n The phone number is %d",b);
      getch();
   }