       /* WRITE A 'C'PROGRAM PRINT THE GIVEN PYRAMID */

#include<stdio.h>
#include<conio.h>
void main()
   {
     int a,b,c,i,j;
     printf("Enter A pyramid number");
     scanf("%d",&a);
     for(i=0;i<=a;i++)
       {
	 for(j=0;j<=i;j++)
	 {

	printf("\n %d",a[i]);
	 }
       }
  getch();
   }