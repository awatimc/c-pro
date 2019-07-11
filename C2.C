
       /*WRITE A 'C'PROGRAM TO TAKE THE TEMPTRACTURE IN CELSIUS AND CONVERT
       IT TO FAHARENHEIT AND DISPLAY IT BACK*/


#include<stdio.h>
#include<conio.h>
void main()
   {
      float a,b,c;
      clrscr();
      printf("\n Enter A present temperature in celsius:");
      scanf("%f",&a);
      b=(5*(a-32)/9);
      printf("\n the temperature in faharenheit is %f",b);
      getch();
   }