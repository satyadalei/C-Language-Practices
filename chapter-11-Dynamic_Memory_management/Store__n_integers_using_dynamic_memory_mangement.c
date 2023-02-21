/*This program takes n integers from users and prints in reverse order using DYNAMIC MEMORY MANAGEMENT */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int size, *numberArray, *i,*j;
    int a;
    printf("\n his program takes n integers from users and prints in reverse order using DYNAMIC MEMORY MANAGEMENT \n");

    printf("\n Enter the number of integers you want to keep in the array \n");
    scanf("%d",&size);
    numberArray = (int*)malloc(size*(sizeof(int)));
   // here numberArray holds the first(base address) of allocated spaces
   if (numberArray == NULL)
   {
      printf("\n This amount of space does not available \n");
      exit(1);
   }
   printf("\n Enter %d integers \n", size);
   for (i = numberArray; i < numberArray+size ; i++)
   {
      scanf("%d",i);
   }
   printf("\n Your entered numbers are : \n");
   for (i = numberArray; i < numberArray+size; i++)
   {
     printf("   %d   ",*i);
   }
   /*numbers in reverse orders*/
   printf("\nThe numbers in reverse order are :\n");
   for (i = numberArray+size-1; i >= numberArray ; i--)
   {
     printf("   %d   ",*i);
   }
   /*Sorting numbers in ascending order*/
   printf("\nNumbers in ascending order\n");
   for (i = numberArray; i < numberArray+size-1; i++)
   {
     for (j = i+1; j < numberArray+size; j++)
     {
        if (*i > *j)
        {
           a = *i;  
           *i = *j;
           *j = a;
        }
     }
   }
   for (i = numberArray; i < numberArray+size; i++)
   {
     printf("   %d   ",*i);
   }
   

   
   

    printf("\n -----------Program Ends-------------- \n");
    getch();
}