/* WAP to swap 2 variabels using function and pointers  */
/*
1 start
2 take user input
3pass the value to fn using its address reference 
4 inside the fn swap the variables
5 print the variable in main function
*/


#include<stdio.h>

void swap(int *,int *);
void main()
{
    int num1,num2;
    printf("\nenetr the 2 number= ");
    scanf("%d%d",&num1,&num2);                          //taking user input from user
    printf("\nnum1 = %d   num2 = %d",num1,num2);
    swap(&num1,&num2);                                  //pass the reference of 2 variable to swap function
     printf("\nnum1 = %d   num2 = %d",num1,num2);
}

void swap(int *x,int *y)                                //fn to swap the 2 values
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
   
}