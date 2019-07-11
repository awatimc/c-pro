   /*WRITE A 'C'PROGRAM TO TAKES MARKS IN 3 SUBJECTS AND DISPLAY THEM
   SUM AND AVERAGE*/

#include<stdio.h>
#include<conio.h>
void main()
{
     float a,b,c,d,e;
     clrscr();
     printf("Enter A three subject marks::");
     scanf("%f %f %f ",&a,&b,&c);
     d=a+b+c;
     printf("\n SUM of the three subject marks is %f",d);
     e=(d/3*100);
     printf("\n AVEREGE of the three subject is %f",e);
     getch();
   }