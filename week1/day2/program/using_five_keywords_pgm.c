/*
 * WAP to use atleast  5 keywords in c and print some output using the same 
 *
 *
 * it is the program to find the corresponding day according to the digit input
 * 1-> sunday  2-> monday 3-> tuesday 4-> wednesday 5-> thursday 6-> friday 7-> saturday
 *
 *
 */



#include<stdio.h>                                               //standard input output header file        
int main()
{
    int num;                                                    //declare the variables
    printf("\nenter the number = ");
    scanf("%d",&num);                                           //accept value from user
    switch(num)                                                 //comapre input value to the corresponding weekday value
    {
        case 1 : printf("\nsunday"); break;
        case 2 : printf("\nmonday"); break;
        case 3 : printf("\ntuesday"); break;
        case 4 : printf("\nwednesday"); break;
        case 5 : printf("\nthursday"); break;
        case 6 : printf("\nfriday"); break;
        case 7 : printf("\nsaturday"); break;
        default: printf("\nincorrect input");                   //if user enter values greater than 7 it will print incorrect
    }
}