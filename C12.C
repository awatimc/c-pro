	 /*WRITE A 'C'PROGRAM TO DISPLAY THE FOLLOWING OPTIONAL:1.CELCIUS TO
	 FAHARNET 2.FAHARNET TO CELCIUS 3.EXIT */

#include<stdio.h>
#include<conio.h>
void main()
  {
     int a,b,c,d,f;
     clrscr();
     printf("1.celcius to faharenheit \n2.faharenheit to celcius \n 3.exit");
     printf("Enter Your Choice");
     scanf("%d",&a);
      switch(a)
	{
	   case 1:printf("\n Enter A number");
		  scanf("%d",&b);
		  c=(b*9/5)+32;
		  printf("faharenet %d",c);

	  case 2:printf("\n Enter A number");
		  scanf("%d",&d);
		  f=((d-32)*5/9);
		  printf("celcius is %d",f);

	 case 3:exit(0);default:printf("Wrong choice");


	}
getch();
  }



