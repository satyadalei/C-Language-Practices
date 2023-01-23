#include<stdio.h>
#include<conio.h>
/* Function definition */
float Average(int x, int y, int z)
{
    float average;
    average = (float)(x+y+z)/3;
    return average;
}
/* Declaring the function */
float Average(int x, int y, int z);
void main()
{
    int a,b,c;
    float average;
        printf("\n Enter the three numbers to calculate averages\n");
        printf("\n Enter 1st number \n");
        scanf("%i",&a);
        printf("\n Enter second number \n");
        scanf("%i",&b);
        printf("\n Enter third number \n");
        scanf("%i",&c);
    average = Average(a,b,c);/*Funcitin call*/
    printf("\n The average of %i, %i, %i is %f \n",a,b,c,average);
    printf("\n--------------Program ends---------------------\n");
}
