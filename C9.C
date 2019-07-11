
     /*WRITE A 'C'PROGRAM TO FIND FACTORIAL FO THE NUMBER*/

#include<stdio.h>
#include<conio.h>
void main()
   {
     int a,b,fact=1,i=1;
     clrscr();
     printf("Enter A factorial number");
     scanf("%d",&a);
       while(i<=a)
	 {
	  fact=fact*i;
	  i++;
	 }
       printf("Factorial is %d",fact);
 getch();


   }