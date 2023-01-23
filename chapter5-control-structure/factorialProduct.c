#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    long int factorialProduct;
    printf("\n Enter the number upto factorial to be calculated. \n");
    scanf("%i",&num);
   factorialProduct = 1 ;
   for(i=2;i<=num;i++)
   {
    factorialProduct = factorialProduct * i ;
   }
   printf("\n factorial of %d is %ld", num, factorialProduct);
}