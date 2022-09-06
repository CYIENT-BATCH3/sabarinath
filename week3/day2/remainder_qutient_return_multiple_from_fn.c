/* WAP to function to return multiple values quotient and remainder from function */
/*
1 start
2 take user input
3 pass the 2 values and adress of the 2 variable to fn
4 find the quotient and store in one address and find the remainder and store in another address
*/

#include<stdio.h>

void divider(int ,int ,int *,int *);
void main()
{
    int num1,num2,remain, ans;
    printf("\nenetr the 2 number= ");
    scanf("%d%d",&num1,&num2);                          //taking user input from user
    divider(num1,num2,&ans,&remain);                                  //pass the reference of 2 variable to swap function
     printf("\n%d / %d  = %d  \n %d %% %d = %d",num1,num2,ans,num1,num2,remain);
}

void divider(int x,int y,int* i,int* j)                                //fn to find the remainder and answer the 2 values
{
    *i = x/y;                                     //division
    *j = x % y;                                     //remainder
}
