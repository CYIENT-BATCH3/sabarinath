/* WAP to print factorial of a number using while loop*/

#include<stdio.h>
int main ()
{
    int num,i=1,fact = 1;;
    printf("enter the number:  ");		//take user input
    scanf("%d",&num);
    if(num ==0)					//if numbe ris 0 then set factorial as 1
    fact = 1;
    else					//else find the factorial using formula
    {
    while(i<=num)
    {
     fact= fact * i;				//each number is multipleid by  using loop
     i++;
    }
    }
    printf("\nfactorial = %d  ",fact);		//print the factorial
}