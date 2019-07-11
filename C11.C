#include<stdio.h>
#include<conio.h>
void main()
   {
     struct student
       {
	 char book[20];
	 char title[20];
	 char author[20];
       };
       struct student s={"c program","student learning c","mallikarjun"};
     printf("\n book %s",s.book);
     printf("\n title %s",s.title);
     printf("\n author %s",s.author);


  getch();



   }