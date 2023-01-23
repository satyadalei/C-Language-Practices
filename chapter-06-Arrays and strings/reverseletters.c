#include<stdio.h>
#include<conio.h>
void main()
{
   int numbers[5];
   int i ;
   printf("\n Enter the 5 numbers \n");
   for ( i = 0; i < 5; i++)
   {
      scanf("%i",&numbers[i]);
   }
   printf("\n Your numbers are printed \n");
   for ( i = 0; i < 5; i++)
   {
     printf("%i", numbers[i]);
     printf(" ");
   }
   printf("\n The numbers are in reverse order \n");
   for ( i = 4; i >= 0; i--)
   {
     printf( "%i", numbers[i]);
     printf(" ");
   }
}
