
/*
 * input the vin number and find the manufacturing plant from the VIN number
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[17];
    printf("enter the string ");            //get the string from user
    gets(a);
    
    if(a[10] == 'E')                        //compare 10th element is E or not
    printf("EC");
    else if(a[10]=='H')                     //compare it with H
    printf("HY");
    else if(a[10]=='P')                     //compare with P
    printf("PU");
    
    
}