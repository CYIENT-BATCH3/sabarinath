/*  wAP to generate random 4 digit number using rand()             */
/*
start 
declare variable 
generate random varaiable
check wether it is 4 digit or not
if it is 4 digit print the number else generate new number and continue the process

*/

#include<stdio.h>
#include<stdlib.h>
int length_fn(int);                                 //fn prototype for digit counting function

void main()
{
    
    int num,num_count=0;
   while(1)                                         //infinite loop
    {
     if(num_count ==10)                             //check weather noof pin reached 10 or not
     break;                                         //if it is reachged then break out of infinite loop
     else
     {
     num = rand()%9999;                             //else generate the number
     if(length_fn(num)==4)                          //check weather it is 4 digit or not
     {
         printf("\n pin no %d = %d",num_count,num); //if it is 4 digit print number
         num_count++;                               //increment the number count
     }
    }
    }
}

int length_fn(int num)                              //fn for finding the no.of digit of the number
{
    int count=0;
    while(num)
    {
        count++;
        num = num/10;
    }
    return count;
}