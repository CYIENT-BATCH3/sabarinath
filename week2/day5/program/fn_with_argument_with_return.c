/* fn with  return and with arguments  */


#include<stdio.h>
int sum();                          //fn prototype of  function with return and no argument
int main()
{
    printf("\n sum = %d",sum());    //call the function and print the return value    
    
}

int sum()                           //fn definition
{
    int num1,num2;
    printf("enetr 2 number : ");
    scanf("%d%d",&num1,&num2);
    return num1+num2;
}
