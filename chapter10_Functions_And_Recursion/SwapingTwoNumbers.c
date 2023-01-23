/*This program swaps two numbers */
#include<stdio.h>
#include<conio.h>
/* Passing parameters Calling by value */
// void Swap(int x, int y)
// {
//   int t;
//   t = x ;
//   x = y;
//   y = t;
// }
/*passing parameters calling by reference / call by pointer */
void Swap(int *, int *); // "* (star) means there must be a memory adress passed as arfguement
void main()
{
    int a = 5,b=7;
    printf("\n This program swaps two numbers \n");
    printf("\n Before swaping a=%i and b=%i  \n",a,b);
    Swap(&a,&b);
    printf("\n After Calling Swapping function a=%i and b=%i \n",a,b);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void Swap(int *x, int *y) /*Expects two address arguments - these two arguments must be address */
{ 
   int t ;
   t = *x;  // here x is an adress but *x means value at that adress --so t stores value
   *x = *y; //here we are stotring value of y address in value of x address
   *y = t;  
}