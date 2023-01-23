/*This program takes two numbers and calculates a+b/a-b if and in only a-b != 0*/
#include<stdio.h>
#include<conio.h>
int Possible(int, int);
double CalculateRatio(int a,int b,int c,int d);
void main()
{
    int a,b,c,d;
    double ratio;
    printf("\n This program takes two numbers and calculates a+b/a-b if and in only a-b != 0 \n");
    printf("\n Enter a and b \n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    ratio = CalculateRatio(a,b,c,d);
    printf("\n The ratio is %lf \n",ratio);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
int Possible(int a,int b)
{
    if (a==b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
double CalculateRatio(int a,int b,int c,int d)
{
   if (Possible(c,d))
   {
     double ratio = ((float)(a+b)/(c-d));
     return ratio;
   }
   else
   {
     printf("\n Can not be calculated? \n");
   }
}