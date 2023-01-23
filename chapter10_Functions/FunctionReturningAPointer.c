#include<stdio.h>
#include<conio.h>
int *WhoIsLarger(int *num1,int *num2)
{ 
   if (*num1 >= *num2)
   {
     return num1;
   }
   else
   {
    return num2;
   }
}
int *WhoIsLarger(int *num1, int *num2); /*We have tell that this function is 
                                         returning a pointer -- If you do not specify * mark before the function name then it will give a compilation error*/
void main()
{
    int a,b, *l;
    printf("\n This program takes two number and prints the largest one\n");
    printf("\n Enter the a and b \n");
    scanf("%i %i",&a,&b);
    l = WhoIsLarger(&a,&b);
    printf("\n The largest number is %i \n",*l);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}