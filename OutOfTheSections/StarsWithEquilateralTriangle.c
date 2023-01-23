#include <stdio.h>
#include <stdio.h>
void main()
{
    int noOfColumns,noOfRows, i, j, k;
    noOfColumns = 11; // it needs to be always odd to print this particular pattern
    noOfRows = (noOfColumns + 1) / 2;

    for (i = noOfRows; i > 0; i--) // i = 4 at start
    {
        /* first white space is printed*/
        for (j = i - 1; j > 0; j--)
        {
            printf(" ");
        }
        /*second star will be printed */
        for (k = noOfColumns - 2*(i-1); k > 0; k--)
        { 
            printf("*");
        }
        /*Third white space will be printed */
        for (j = i - 1; j > 0; j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}