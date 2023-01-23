/*This program takes one number finds it factorial using recursion */
#include<stdio.h>
#include<conio.h>

int Factorial(int a);
void main()
{
    int num,factorial;
    printf("\n This program takes one number finds it factorial using recursion\n");
    printf("\n Enter the number \n");
    scanf("%i",&num);
    factorial =  Factorial(num);
    printf("\n %i!(factorial) is = %i \n",num,factorial);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
int Factorial(int a)
{
    if (a>0)
    {
       return a*Factorial(a-1);
    }
    else
    {
        return 1;
    }
    
}