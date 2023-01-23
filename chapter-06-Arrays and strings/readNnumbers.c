#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[10],n,i;
    printf("\n Enter the number of digits you want to print \n");
    scanf("%i",&n);
    numbers[n];  
    printf("\n Enter %i numbers \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%i",&numbers[i]);
    }
    printf("\n The number is %i\n",n);
    printf("\n Your numbers are :\n");
    for ( i = 0; i < n; i++)
    {
       printf(" %i ", numbers[i]);
    }
    
}