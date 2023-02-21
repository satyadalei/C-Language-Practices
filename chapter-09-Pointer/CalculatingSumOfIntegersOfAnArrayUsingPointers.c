/*This program calculates sum of all elements of an integer array using only pointer */
#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[4] = {1,2,3,4},i,sum=0;
    int *n;
    n = numbers;
   printf("\n This program calculates sum of all elements of an integer array using only pointer \n");

   printf("\n Element\t Address\t Value \n");
  printf("\n--------\t -------\t ------\t \n");

   for (i = 0; i < 4; i++)
   {
     printf("\n x[%d] \t %u\t %d \n",i,n+i,*(n+i));
     sum = sum + *(n+i);
   }
   printf("\n  The sum of the elements is %d \n",sum);
   
   //printf("\n The value at at 1rst array is %d \n",*n);

    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}