/* WAP to swap 2 numbers using numbers */

/* WAP to swap 2 numbers using numbers */

#include<stdio.h>

void swap();                                //fn prototype
int main()
{
    swap();                                 //fn call
    
}

void swap()                                 //fn definition
{
    int a,b,temp;                           //declare the variables
    printf("\n enter 2 variable : ");
    scanf("%d%d",&a,&b);
    printf("\nbefore swap");
    printf("\n a = %d   b = %d",a,b);
    printf("\n after swap");
    a = a ^ b;                              //interchanging withou using temp
    b = a ^ b;
    a = a ^ b;
    printf("\n a = %d   b = %d",a,b);
}