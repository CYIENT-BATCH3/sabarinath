/* wAP to concatinate 2 string using strcat */

/*
start
declare variable and take user input strings
append the second string at the end osf 1st string using strcat
print the output

*/

#include <stdio.h>

int main()
{
    char ch1[20],ch2[20];
    int count=0,i=0;
    printf("\nenter the string 1:");               //take user input 
    gets(ch1);
    printf("\nenter the string 2:");               //take user input 
    gets(ch2);
    
    printf("\n%s",strcat(ch1,ch2)) ;                //concatinate using strcat     
}
