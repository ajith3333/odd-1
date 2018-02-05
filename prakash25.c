#include<stdio.h>
#include<conio.h>

   void main()
   {

                int numbr,k,remark;

                printf(" The prime numbers between 1 and 10 : \n");

                for(numbr=2;numbr<=10;++numbr)

               {

               remark=0;

               for(k=2;k<=numbr/2;k++){

               if((numbr % k) == 0){

               remark++;

               break;

               }

               }

               if(remark==0)

               printf("\n    %d ",numbr);

              }

    getch();

   }
