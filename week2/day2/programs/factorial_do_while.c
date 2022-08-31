/* WAP to print factorial of a number using do  while loop*/

#include<stdio.h>
int main ()
{
    int num,i=1,fact = 1;;
    printf("enter the number:  ");
    scanf("%d",&num);
    if(num ==0)
    fact = 1;
    else
    {
    do
    {
     fact= fact * i;
     i++;
    } while(i<=num);
    }
    printf("\nfactorial = %d  ",fact);
}