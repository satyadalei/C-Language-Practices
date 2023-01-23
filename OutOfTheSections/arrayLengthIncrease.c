#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,length ,numbers[10];
    length   = sizeof(numbers)/ sizeof(numbers[0]) ;
    printf("\n The length of Array is %d \n", length);
    numbers[100] ;
    length   = sizeof(numbers)/ sizeof(numbers[0]) ;
    printf("\n The length of Array is %d \n", length);
}