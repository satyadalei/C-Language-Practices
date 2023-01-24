/*This program takes some numbers from users and sorts them in Ascending orders */
#include<stdio.h>
#include<conio.h>
void Swap(int *a, int *b);
void Sort(int a[],int n);
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
    Sort(numbersArray,n);
    /*Printing of numbers*/
    for ( i = 0; i < n; i++)
    {
        printf(" %i ",numbersArray[i]);
    }
    
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
/*-----------------Sorting array function------------------*/
void Sort(int a[],int n)
{
  int i,j;
  for (i = 0; i < n-1; i++)
  {
    for (j = i+1; j < n; j++)
    {
         if (a[i] > a[j])
         {
            Swap(&a[i],&a[j]);
         }
         
    }
  } 
}
/*--------------Swaping function----------------------------*/
void Swap(int *a, int *b)
{
   int c = *a;
   *a = *b;
   *b = c;
}