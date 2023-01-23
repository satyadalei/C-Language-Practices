/*This program takes 9 integers and prints 3X3 matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,numbers[3][3], diagonalSum;
    diagonalSum = 0;
    printf("This program takes 9 integers and prints a 3X3 matrix");
    printf("\n Enter the 9 nintegers \n");
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
          scanf("%d", &numbers[i][j]);
       }
       
    }
    printf("\n \n \n Your matrix was : \n");
    /*Printing the matrix*/
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
        if(i == j){
            diagonalSum = diagonalSum + numbers[i][j] ;
        }
          printf(" %d ",numbers[i][j]);
       }
       printf("\n");
    }
    printf("\n And the sum is %d", diagonalSum);
    
}