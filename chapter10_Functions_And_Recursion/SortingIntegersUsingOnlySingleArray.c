/*This program takes an array of integers and sorts them in ascending order*/
#include<stdio.h>
#include<conio.h>
void Swap(int *a, int *b);
void Sort(int a[], int n);
void main()
{
    int i,j,numbers[5],a;
    printf("\n This program takes an array of integers and sorts them in ascending order \n");
    printf("\n Enter 5 numbers \n");
    for ( i = 0; i < 5; i++)
    {
       scanf("%i",&numbers[i]);
    }
    // for ( i = 0; i < 5-1 ; i++)
    // {
    //     for ( j = i+1; j < 5; j++)
    //     {
    //        if (numbers[i] > numbers[j])
    //        {
    //         //  a = numbers[i];
    //         //  numbers[i] = numbers[j];
    //         //  numbers[j] = a;
    //         Swap(&numbers[i], &numbers[j]);
    //        }
    //     }
    // }
    Sort(numbers,5);
    for (i = 0; i < 5; i++)
    {
        printf(" %i ",numbers[i]);
    }
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
/*-----------Swap Function Definition--------------------------*/
void Swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
/*---------------Sorting Function definition--------------------*/
void Sort(int a[], int n)
{
   int  i,j;
   for (i = 0; i < n-1; i++)
   {
     for (j = i+1; j < n; j++)
     {
        if (a[i]>a[j])
        {
           Swap(&a[i],&a[j]);
        }
     }
   }
   
}