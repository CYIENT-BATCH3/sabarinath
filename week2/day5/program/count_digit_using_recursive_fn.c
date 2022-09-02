/* AP to count no of digit in a given number using recursive function */

#include<stdio.h>
static int count =0;
int no_of_digit(int num);                          //fn prototype of  function with return and no argument
int main()
{  
    int num;
   printf("enter the number: ");
   scanf("%d",&num);
   printf("%d",no_of_digit(num));                  //call the function by giving parameters and print the return value    
    
}

int no_of_digit(int num)                           //fn definition
{
    
    if(num !=0)                                     //check weather the num is zero or all digits were taken
    {
        count++;                                    //increment trhe counter
        no_of_digit(num/10);                        //recursive function for the next digit
    }
    return count;
}