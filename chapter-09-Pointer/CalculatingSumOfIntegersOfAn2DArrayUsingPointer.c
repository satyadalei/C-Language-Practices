/*This program calculates sum of the elements of an 2D array using pointer */
#include<stdio.h>
#include<conio.h>
void main()
{
   int numbers[2][3] = {1,2,3,4,5,6};
   int i,j,sum=0;
   int *n = &numbers[2][3];

   for ( i = 0; i < 2; i++)
   {
     for (j = 0; j < 3; j++)
     {
         sum = sum + *((n+i)+j);
     }
   }
   
   printf("\n The sum is %d \n",sum);

   printf("\n This program calculates sum of the elements of an 2D array using pointer \n");

    printf("\n -----------Program Ends-------------- \n");
    getch();
}