#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[10],i,reverseNumbers[10];
    printf("\n This program takes 10 numbers and prints in reverse order \n");
    printf("\n Enter ten numbers - Note after entering each number press ENTER button \n");
    for(i=0; i<10 ; i++)
    {
        scanf("%i",&numbers[i]);
    }
    printf("\n Reverse order number is  \n");
    for ( i = 9; i >= 0; i--)
    {
       printf("%i ", numbers[i]);
    }
    

}