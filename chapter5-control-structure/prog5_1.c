#include<stdio.h>
#include<conio.h>
void main()
{
    /*This program takes 4 integers as a,b,c,d and calculates (a+b)/(c-d) if c-d != 0 */ 
    printf("This program takes 4 integers as a,b,c,d and calculates (a+b)/(c-d) :");
    int a,b,c,d;
    float result;
    printf("Enter four numbers :");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if(c-d == 0){
       printf("Can not be calculated! choose other numbers :");
    }else{
     result = (float) (a+b)/(c-d) ;
     printf("The result is %f ", result);
    }
   getch();
}