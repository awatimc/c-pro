#include<stdio.h>
#include<conio.h>
void main()
   {
     int a,b;
     clrscr();
     printf("Enter A first number");
     scanf("%d",&a);
     printf("Enter A second number");
     scanf("%d",&b);
     if(a<b)
       {
	 printf("Second number is big");
       }
	 else

       {
	 printf("First number is Small");
       }
getch();
   }