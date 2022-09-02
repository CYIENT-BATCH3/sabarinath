/*factorial using recursive function  */

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
    int count,fact=1;				//checking weatheer the number is 0 or not if it is zero then it will retuen 1
    if(num ==0)
    return 1;
    fact = num * factorial(num-1) ;		//findind factorial using recursive function
    return fact;
}
