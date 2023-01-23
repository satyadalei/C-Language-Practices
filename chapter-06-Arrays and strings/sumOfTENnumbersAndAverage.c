#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum, numbers[10];
    float average;
    printf("\n This program calculates average of ten numbers \n");
    printf("\n Enter 10 numbers - After entering each number press ENTER button \n");
    
    sum = 0 ;
    for(i = 0 ; i < 10 ; i++){
        scanf("%d",&numbers[i]);
        sum = sum + numbers[i];
    }
    average = (float) sum/10 ;
    printf("\n The sum of ten numbers is %i and average is %f \n", sum, average);
}