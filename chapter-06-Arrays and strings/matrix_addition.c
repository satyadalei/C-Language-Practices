#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,matrix1[3][3], matrix2[3][3], matrixSum[3][3];
    printf("\n This program takes 2 3X3 matrix and calculates it's sum \n");
    printf("\n Enter the first matrix numbers \n");
    /*first matrix*/
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           scanf("%d",&matrix1[i][j]);
        }
    }
    /*Second matrix*/ 
    printf("\n Enter the second matrix numbers \n");
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           scanf("%d",&matrix2[i][j]);
        }
        
    }
    /*Sum of the matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j] ;
        }
    }
    /*Printing first matrix */
    printf("\n Your first matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ",matrix1[i][j]);
        }
        printf("\n");
    }
    /*Printing second matrix */
    printf("\n Your second matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ",matrix2[i][j]);
        }
        printf("\n");
    }
    /*Printing the sum of these matrix*/ 
    printf("\n The sum of the matris is \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        printf(" %d ",matrixSum[i][j]);
        }
        printf("\n");
    }
}