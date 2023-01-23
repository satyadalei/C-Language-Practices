#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[] = {2,3,5} ;
    int sizeOfArray, sizeOfIndex, lengthOfArray, insertNum ;
    sizeOfArray = sizeof(numbers);
    sizeOfIndex = sizeof(numbers[0]);
    lengthOfArray = sizeOfArray/sizeOfIndex ;

    printf("\n The size of an array is %d and the size of array index %d and the length of Array is %d ",sizeOfArray, sizeOfIndex, lengthOfArray);
    printf("\n Enter the number you want to push to the array \n");
    scanf("%i", &insertNum);

     numbers[lengthOfArray] = insertNum ;
    sizeOfArray = sizeof(numbers);
    sizeOfIndex = sizeof(numbers[0]);
    lengthOfArray = sizeOfArray/sizeOfIndex ;

    printf("\n The size of an array is %d and the size of array index %d and the length of Array is %d ",sizeOfArray, sizeOfIndex, lengthOfArray);

}