/*This program takes astring and prints through another function */
#include<stdio.h>
#include<conio.h>
void PrintString(char name[]);
void main()
{
    char string[100];
    printf("\n This program takes astring and prints through another function \n");
    printf("\n Enter the string \n");
    gets(string);
    PrintString(string);
    printf("\n -----------Program Ends-------------- \n");
    getch();
}
void PrintString(char name[])
{
  puts(name);
}