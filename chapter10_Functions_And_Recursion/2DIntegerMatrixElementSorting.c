/*This program  */
#include<stdio.h>
#include<conio.h>
void main()
{
   int m,n,i,j,k,l,a;
   int secondSmallest,secondLargest,preValue;
   int largestCount = 0 ;
   int smallestCount = 0;
   secondSmallest = -1;
   secondLargest = -1;
    printf("\n This program sorts an array \n");
    printf("\n Enter m to form mXn matrix\n");
    scanf("%i",&m);
    printf("\n Enter n to form mXn matrix\n");
    scanf("%i",&n);
    int integerArray[m][n];
    printf("\n Enter %i elements \n",m*n);
    for ( i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
       {
          printf("\n Enter array[%i][%i] element :",i,j);
          scanf("%i",&integerArray[i][j]);
       }
    }

    for ( i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
       {
          printf("   %i   ",integerArray[i][j]);
       }
       printf("\n");
    }
    printf("\n\n");
    for (i = 0; i < m; i++)/*row*/
    {
        for (j = 0; j < n; j++) /*column*/
        {
             for (k = 0; k < m; k++) /*row*/
             {
                for (l = 0; l < n; l++)
                {
                  if (integerArray[i][j] < integerArray[k][l] )
                  {
                    a = integerArray[i][j];
                    integerArray[i][j] = integerArray[k][l];
                    integerArray[k][l] = a;
                  }
                }
             }
        }
    }
    /*==========After Sorting=================*/
    printf("\n After sorting elements is \n\n");
    for ( i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
       {
          printf("   %i   ",integerArray[i][j]);
       }
       printf("\n");
    }
    /*=================== Finding 2nd smallest ===================== */
    preValue = integerArray[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
             if (preValue != integerArray[i][j])
             {
                secondSmallest = integerArray[i][j];
                smallestCount = 1;
                break;
             }
             /*in case all elements are same in matrix*/
             else if (i== m-1 && j== n-1 && secondSmallest == -1)
             {
                secondSmallest = integerArray[i][j];
             }

        }
        if (smallestCount == 1)
        {
          break;
        }
        
    }
    /*================== 2nd largest integer =================*/
    preValue = integerArray[m-1][n-1];
    for (i = m-1; i >= 0; i--)
    {
        for (j = n-1; j >= 0; j--)
        {
             if (preValue != integerArray[i][j])
             {
                secondLargest = integerArray[i][j];
                largestCount = 1;
                break;
             }
             /*in case all elements are same in matrix*/
             else if (i== 0 && j== 0 && secondLargest == -1)
             {
                secondLargest = integerArray[i][j];

             }
        }
        if (largestCount == 1)
        {
          break;
        }
        

    }
    printf("\n Second smallest integer is : %i \n",secondSmallest);
    printf("\n Second largest integer is : %i \n",secondLargest);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}