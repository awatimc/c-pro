     /*WRITE A 'C'PROGRAM TO READ THE FIRST NAME AND LAST
     NAME OF THE USER IN TWO DIFFERENT VARIABLES ,COMBINE THEM
     ,AND DISPLAY THERE FULL NAME USING A SINGLE STRING*/


#include<stdio.h>
#include<conio.h>
void main()
 {
  char a[20],b[20],c[50];
  clrscr();
  printf("\n Enter Your first name=");
  scanf("%s",&a);
  printf("\n Enter A last name=");
  scanf("%s",&b);
  printf("\n Your name is %s %s",a,b);
  getch();
  }