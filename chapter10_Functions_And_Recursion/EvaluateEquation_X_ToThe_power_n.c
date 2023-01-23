/*This program  */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float Power(float x, int n)
{
    float y;
    y = pow(x,n);
    return y;
}
float Power(float x, int n);
void main()
{
    float X;
    int n;
    int Y;
    printf("\n This program takes x and n then prints the value of x to the power n\n");
    printf("\n Enter X value \n");
    scanf("%f",&X);
    printf("\n Enter n Value \n");
    scanf("%i",&n);
    Y =  Power(X,n);
    printf("\n  Ans is %i \n",Y);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}