#include<stdio.h>
#include<conio.h>
void main()
{
   int initialNum, i,j,k ;
   initialNum = 5 ;
   for ( i = initialNum; i > 0 ; i--)
   {
     for(j = i-1 ; j >= 1 ; j-- )
     {
        printf(" ");
     }
     for(k = initialNum - (i-1) ; k > 0 ; k-- )
     {
        printf("*");
     }
     printf("\n");
   }
}