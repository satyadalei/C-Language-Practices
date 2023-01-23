#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("\n Enter the three integers :");
    scanf("%d %d %d", &num1,&num2,&num3);
    if (num1<num2)
    {
       //num1 is smaller than num2
       if (num1<num3)
       {
        //num1 is smaller than num3
        printf("\n The %d is smallest number", num1);
       }
       else
       {
        //num3 is smaller than num1
        printf("\n The %d is smallest number", num3);
       }
    }
    else
    {
       // num2 is smaller than num1 
     if(num2<num3)
     {
        printf(" The %d is smallest number", num2);
     }
     else{
        printf("\n The %d is smallest number", num3);
     }
     
    }
    getch();
}