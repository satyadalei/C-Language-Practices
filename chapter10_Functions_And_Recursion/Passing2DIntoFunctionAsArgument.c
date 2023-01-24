/* This program takes a 2D matrix and calculates sum of all elements  */
#include<stdio.h>
#include<conio.h>
/*---------Global Variables------------------*/
int l ;
float AverageOfElements(int a[][l],int m, int n );
void main()
{
    int m,n,i,j;
    float average;
    printf("\n This program takes a 2D matrix and calculates sum of all elements \n");
    printf("\n To create a mXn matrix please enter m and n respectively \n");
    printf("\n Enter m value \n");
    scanf("%i",&m);
    printf("\n Enter n value \n");
    scanf("%i",&n);
    int number[m][n];
    l = n;
    printf("\n Enter %i numbers \n",m*n);
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%i",&number[i][j]);
        }
    }
    average = AverageOfElements(number,m,n );
    printf("\n The average of the elements of the matrix is %f \n",average);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
float AverageOfElements(int a[][l],int m, int n )
{
    int i,j,sum=0;
    float average;
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("   %i   ",a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    average = (float) sum/(m*n) ;
    return average;
}