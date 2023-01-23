/*This program takes one integer and says whwether it is odd or even*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("\n This program takes an integer and says whether it is odd or even :");
    printf("\n Enter any integer");
    scanf("%d", &num);
    if (num%2 == 0)
    {
       printf("\n %d is an even number.", num);
    }
    else
    {
        printf("\n %d is an Odd number.", num);
    }
    printf("\n Program ends");
    getch();
}