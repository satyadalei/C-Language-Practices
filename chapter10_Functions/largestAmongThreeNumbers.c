/*This program  */
#include<stdio.h>
#include<conio.h>
/* Defining a function */
int Largest(int a,int b, int c)
{
    int largest = a;
    if (largest <= b)
    {
        largest = b;
    }
    if (largest <= c)
    {
       largest = c;
    }
    
    return largest;
} 
/*Declaring a function*/
int Largest(int a,int b, int c);
void main()
{
    int x,y,z,largestAmongThreeNumbers;
    printf("\n This program take sthree number and prints largest among them \n");
    printf("\n Enter three numbers  \n");
    scanf("%i%i%i",&x,&y,&z);
    largestAmongThreeNumbers = Largest(x,y,z);
    printf("\n The largest number among three numbers %i, %i, %i is %i \n",x,y,z,largestAmongThreeNumbers);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}