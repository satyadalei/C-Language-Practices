#include <stdio.h>
#include <conio.h>
void main()
{
   int i, j, numbers[3][3];
   printf("\n This program creates a 3X3 matrix by taking 9 numbers \n");
   printf("\n Enter 9 numbers - after each number press Enter button \n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%i ", &numbers[i][j]);
      }
   };
   printf("\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%i ", numbers[i][j]);
      }
      printf("\n");
   }
}