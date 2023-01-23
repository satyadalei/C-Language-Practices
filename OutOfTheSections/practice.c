#include<stdio.h>
#include<conio.h>
void main()
{
    int i,p,finalNum;
    printf("Enter any number \n");
    scanf("%d", &finalNum);
    for( i=1 ; i<= finalNum ; i=i+1){
        for(p = 1 ; p <= i ; p = p+1){
          printf("*");
        }
        printf("\n");
    }

}