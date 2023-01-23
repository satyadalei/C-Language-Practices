#include<stdio.h>
#include<conio.h>
void main()
{
     int numbers[5] = {1,2,3,4},i,initialNum, nextNum;
    for ( i = 0; i < 5; i++)
    {
        printf(" %i ",numbers[i]);
    } 
    initialNum = numbers[0];
    numbers[0] = 0;
    for (i = 1; i < 5; i++)
    {
       nextNum = numbers[i] ;
       numbers[i] = initialNum ;
       initialNum = nextNum ;
    }
    printf("\n\n");
     for ( i = 0; i < 5; i++)
    {
        printf(" %i ",numbers[i]);
    }
}