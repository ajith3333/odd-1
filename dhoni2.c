#include <stdio.h>
#include<conio.h>
#include <string.h>
 
void main()
{
   char a[100], b[100];
 
   printf("Enter a string\n");
   gets(a);
 
   printf("Enter a string\n");
   gets(b);
 
   if (strcmp(a,b) == 0)
      printf("The strings are equal.\n");
   else
      printf("The strings are not equal.\n");
 
   getch();
}
