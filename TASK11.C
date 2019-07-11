#include<stdio.h>
#include<conio.h>
void main()
   {
     struct student
       {
	 char book[50];
	 char title[50];
	 char author[50];
	 char genre[50];
       };
      struct student stud1;
      clrscr();
      printf("Enter A book ");
      scanf("%s",stud1.book);
      printf("Enter a title");
      scanf("%s",stud1.title);
      printf("Enter A author");
      scanf("%s",stud1.author);
      printf("Enter A gener");
      scanf("%s",stud1.genre) ;
      printf("\n %s",stud1.book);
      printf("\n %s",stud1.title);
      printf("\n %s",stud1.author);
      printf("\n %s",stud1.genre);
    getch();
  }




