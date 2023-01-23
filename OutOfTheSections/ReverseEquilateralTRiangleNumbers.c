#include<stdio.h>
#include<conio.h>
void main()
{
    int initialNum,i,j,k,printNum;
    initialNum = 7 ;
    for ( i = initialNum; i > 0; i--)
    {
            for (j = initialNum - i ; j > 0; j--)
            {
                printf(" ");
            };
            for (k = i - (initialNum-i); k > 0; k--)
            {
                printf("*");
            };
            for (j = initialNum - i ; j > 0; j--)
            {
                printf(" ");
            };
        printf("\n");
    } ;
    printf("\n Program Ends");
}
/*
Output is Like this

*/ 