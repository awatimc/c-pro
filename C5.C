#include<stdio.h>
#include<conio.h>
void main()
   {
      int n,rn=0,rem;
      clrscr();
      printf("Enter A number=");
      scanf("%d",&n);
      while(n!=0)
	{
	  rem=n%10;
	  rn=rn*10+rem;
	  n/=10;
	}
      printf("Reverse number is %d",rn);
      getch();
   }