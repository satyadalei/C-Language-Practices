#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("\n Enter the three number :");
    scanf("%d %d %d", &num1,&num2,&num3);
    if (num1>num2)
    {
       if(num1>num3)
       {
         printf("%d is largets number", num1);
       }
       else{
        printf(" %d is largest number", num3);
       }
    }
    else
    {
       if(num2 > num3)
       {
         printf(" %d is largest number ", num2);
       }
       else
       {
           printf(" %d is largest number ", num3);
       }
    }
    
}