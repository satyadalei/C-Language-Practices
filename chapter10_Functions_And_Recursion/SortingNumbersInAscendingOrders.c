/*This program takes some numbers from users and sorts them in Ascending orders */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,a;
    printf("\n This program takes some numbers from users and sorts them in Ascending orders \n");
    printf("\n Enter the number of numbers you wwant to print \n");
    scanf("%i",&n);
    int numbersArray[n];
    printf("\n Enter the %i numbers \n",n);
    for (i = 0; i < n; i++)
    {
       scanf("%i",&numbersArray[i]);
    }
    for (i = 0; i < n-1; i++)
    {
       for (j = i+1; j < n; j++)
       {
          if (numbersArray[i] > numbersArray[j])
          {
            a = numbersArray[i];
            numbersArray[i] = numbersArray[j];
            numbersArray[j] = a;
          }
       }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf(" %i ",numbersArray[i]);
    }
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}