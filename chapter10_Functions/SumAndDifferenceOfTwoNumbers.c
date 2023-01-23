/*This program claculates sum and difference ausing user defined function */
#include<stdio.h>
#include<conio.h>
void SumAndDifference(int a, int b, int *sum, int *diff);
void main()
{
    int a = 5,b=7,s,d;
    printf("\n This program claculates sum and difference ausing user defined function \n");
    SumAndDifference(a,b,&s,&d);
    printf("\n The sum and difference of a=%i and b=%i is %i , %i respectively \n",a,b,s,d);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void SumAndDifference(int a, int b, int *sum, int *diff)
{
  *sum =  a + b;   
  *diff = a - b;
}