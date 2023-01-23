/*This program takes tow numbers and prints their greatest common diviser  */
#include<stdio.h>
#include<conio.h>

int Gcd(int a, int b)
{
  int gcd,i;
  int smaller = a;
  if ( smaller >= b)
  {
    smaller = b;
  }
  for ( i = smaller; i >= 1; i--)
  {
    if(a%i == 0 && b%i == 0)
    {
       gcd = i ;
       break;
    }
  }

  return gcd;
}
int Gcd(int a, int b);
void main()
{
    int a,b,gcd;
    printf("\n This program takes tow numbers and prints their greatest common diviser \n");
    printf("\n Enter two numbers a and b \n");
    scanf("%i %i",&a,&b);
    gcd = Gcd(a,b);
    printf("\n The greatest common diviser(GCD) of %i and %i is %i \n",a,b,gcd);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}