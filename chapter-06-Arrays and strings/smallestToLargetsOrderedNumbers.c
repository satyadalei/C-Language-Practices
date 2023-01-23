#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,smallest,smallestPosition,count = 0 ,largest;
    int numbers[5],orderedNumber[5] ;
    printf("\n This program reorders from smallest to largest in orders\n");
    printf("\n Enter 5 numbers in any order \n");
    // taking the numbers
    for ( i = 0; i < 5; i++)
    {
        scanf("%i",&numbers[i]);
    }
    
     //finding largest ;
     largest = numbers[0];
     for (i = 0; i < 5; i++)
     {
        if (largest < numbers[i])
        {
            largest = numbers[i];
        }
        
     }
     printf("\n The largest number is %i \n",largest);

    //finding smallest
    
    for (i = 0; i < 5; i++)
    {
        smallest = numbers[i];
        for (j = 0; j < 5; j++)
        {
          //check first smallest 
          if (smallest >= numbers[j])
          {
            smallest = numbers[j];
            smallestPosition = j ;
          }

          if (j == 4)
          {
            orderedNumber[count] = smallest;
            count++;
            numbers[smallestPosition] = largest ;
          }
        }  
    }
    //printing of ordered numbers
    printf("\n The numbers in ordered format is \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %i ", orderedNumber[i]);
    }
    printf("\n The numbers after  \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %i ", numbers[i]);
    }
    
    
    

}