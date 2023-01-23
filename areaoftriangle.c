#include <stdio.h>
void main()
{
  int base, height, area;

  printf(" \n Enter the Base of Triangle : \n");
   scanf("%i", &base) ;
  printf("\n Enter the height of Triangle : \n");
   scanf("%i", &height);
   area = (base*height) /2 ;
  printf("\n Area of the triagnle is %i", area) ;
}
