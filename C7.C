#include<stdio.h>
#include<conio.h>
void main()
  {
    char str[50];
    printf("Enter A string");
    gets(str);
    if(ispalindrome(str))
      {
	printf("palindrome");
      }
	else
      {
	printf("Not a palindrome");
      }
     int ispalindrome(char s[])
       {
	 int l,i;
	 l=strlen(s);
	 for(i=0;i<1/2;i++)
	    if(s[i]!=s[l-1-i])
	     return (0);

       }
	return (1);
    getch();
  }