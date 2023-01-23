/*This program takes two number and calculates its power for ex 2 To The Power 3 is 8 */
#include<stdio.h>
#include<conio.h>
int Power(int a,int b);
void main()
{
    int a,b,aToThePowerb;
    printf("\n This program takes two number and calculates its power for ex 2 To The Power 3 is 8 \n");
    printf("\n Enter base value as a and power value as b \n");
    scanf("%i %i",&a,&b);
    aToThePowerb = Power(a,b);
    printf("\n So %i to the power %i is %i \n",a,b,aToThePowerb);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
int Power(int a,int b)
{
  if (b > 0)
  {
    return a*Power(a, b-1);
  }
  else
  {
    return 1;
  }
}