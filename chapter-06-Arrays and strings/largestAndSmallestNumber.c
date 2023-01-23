#include<stdio.h>
#include<conio.h>
void main()
{
    int i,numbers[5],smallest,longest;
    printf("\n This program asks 5 integers to take and takes all the integers and sort them in descending order \n");
    printf("\n Enter the integers \n");
    //scanf("%i",&numberOfIntegers);
    for ( i = 0; i < 5 ; i++)
    {
        scanf("%i",&numbers[i]);
    }
    for(i=0;i<5;i++)
    {
        printf(" %i ",numbers[i]);
    }
    smallest = numbers[0];
    for(i=0 ; i <5 ;i++)
    {
        if(smallest>numbers[i])
        {
            smallest = numbers[i];
        }
    }
    longest = numbers[0];
    for(i=0;i<5;i++)
    {
        if(longest<numbers[i])
        {
            longest = numbers[i];
        }
    }
    printf("\n The smallest number is %i \n",smallest);
    printf("\n The largest number is %i \n",longest);
}
