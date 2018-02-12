#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
 int count=0,max =0,i;
 for(i=0;i<=100;i++)
 {
   if(str[i]!='\0')
   {
     max = max + 1;

     if(str[i]==ch)
     {
      count = count + 1;
     }
   }
 }

 printf("\nTotal Number of characters : %d\n",max);
 printf("\nNumber of Occurrences of %c : %d\n",ch,count);
}

int main(void)
{
 void occurrence(char [], char);
 int chk;
 char str[100], ch, buffer;

 clrscr();
 printf("Enter a string : \n");
 gets(str);

 printf("Do you want to find the number of occurences \nof a particular character (Y = 1 / N = 0) ?  ");
 scanf("%d", &chk);

 do
 {
  if (chk==1)
  {
   buffer = getchar(); //dummy varaiable to catch input \n
   printf("Enter a Character : ");
   ch = getchar();
   occurrence(str,ch);
   printf("\n\nDo you want to check the number of occurences \nof another character (Y = 1 / N = 0) ? ");
   scanf("%d", &chk);
  }
  else
  {
   exit();
  }
 }
 while(chk);

 getch();
}
