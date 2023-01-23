#include<stdio.h>
#include<conio.h>
void main()
{
    /*This program takes three ----*/
    printf("\n This program takes ten numbers and finds the largest one among them");
    printf("\n Enter the 10 numbers - but after entering each number press enter \n");
    int largest,i,rollNums[10];
    for ( i = 0; i <= 9; i++)
    {
       scanf("%i ",&rollNums[i]);
    }
    largest = rollNums[0];
    for ( i = 0; i <= 9; i++)
    {
        if (largest <= rollNums[i])
        {
            largest = rollNums[i];
        }
    }
    printf("\n Largest is %d ", largest);
}