/* WAP to print the factorial of number using function   */


#include<stdio.h>
int factorial(int num);                          //fn prototype of  function with return and no argument
int main()
{  
    int num;
   printf("enter the number: ");
   scanf("%d",&num);
   printf("%d",factorial(num));                  //call the function by giving parameters and print the return value    
    
}

int factorial(int num)                           //fn definition
{
    int count,fact=1;;
    if(num ==0)
    return 1;
    for(count = 1; count<= num; count++)
    fact = fact * count;
    return fact;
}