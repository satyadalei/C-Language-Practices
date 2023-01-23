/*This program takes one number and calculates sum till this number starting from one */
#include<stdio.h>
#include<conio.h>
int Sum(int);
void main()
{
    int num,sum;
    printf("\n This program takes one number and calculates sum till this number starting from one \n");
    printf("\n Enter a number \n");
    scanf("%i",&num);
    sum = Sum(num);
    printf("\n The sum of numbers starting from 1 to %i is %i \n",num, sum);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
int Sum(int a)
{
    if (a > 0)
    {
       return a + Sum(a-1) ;
    }
    else
    {
        return 0;
    }
}