#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,numbers[3][3];
    printf("\n This program takes 9 integers and forms a 3X3 matrix and makes its tranpose \n");
    printf("\n Enter the numbers \n");
    for (i = 0; i <= 2; i++)
    {
       for (j = 0; j <=2 ; j++)
       {
         scanf(" %d ", &numbers[i][j]);
       }
       
    }
    printf("\n Your entered matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            printf(" %d ", numbers[i][j]);
        }
        printf("\n");
    }
    printf("\n The transpose of the matrix is : \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", numbers[j][i]);
        }
        printf("\n");
    }
    
    getch();
}