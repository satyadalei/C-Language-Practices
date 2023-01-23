/*This program takes 9 integers and prints 3X3 matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,numbers[3][3];
    printf("This program takes 9 integers and prints a 3X3 matrix");
    printf("\n Enter the 9 nintegers \n");
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
          scanf("%d", &numbers[i][j]);
       }
       
    }
    printf("\n \n \n Your matrix was :");
    /*Printing the matrix*/
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
          printf(" %d ",numbers[i][j]);
       }
       printf("\n");
    }

    printf("\n  Now the transpose matrix is :");
    printf("\n ");
    for(i=0; i<3; i++)
    {
       for(j=0;j<3;j++)
       {
        printf(" %d ",numbers[j][i]);
       }
       printf("\n ");
    }
}