#include<stdio.h>
#include<conio.h>
void main()
{
    int inialNum,i,j,k;
    inialNum = 7 ;
    for ( i = inialNum; i > 0; i--)
    {
            for (j = inialNum - i ; j > 0; j--)
            {
                printf(" ");
            };
            for (k = i - (inialNum-i); k > 0; k--)
            {
                printf("*");
            };
            for (j = inialNum - i ; j > 0; j--)
            {
                printf(" ");
            };
        printf("\n");
    } ;
    printf("\n Program Ends");
}
/*
Output is Like this
*******
 *****
  ***
   *
*/ 