#include<stdio.h>
#include<conio.h>
void main()
   {
     int n,s,c,sum=0,temp;
     clrscr();
     printf("Enter A number");
     scanf("%d",&n);
     temp=n;
     while(n>0)
       {
	 n=n%10;
	 c=n*n*n;
	 sum=sum+c;
	 n=n/10;

       }
     n=temp;
     if(n==sum)
       {
	 printf("Angstrong number ");
       }
	 else
       {
	printf("not a angstrong number");

       }
    getch();
   }