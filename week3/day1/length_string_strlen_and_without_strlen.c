/* wAP to find the length of string using length strlen and without using strlen  */

/*
start
declare variable and take user input string
find the lenghth of the string using function and without using function
inside loop extract every character until null character is reached and increment the count
print the outpur
*/

#include <stdio.h>

int main()
{
    char ch[20];
    int count=0,i=0;
    printf("enter the string :");               //take user input 
    gets(ch);
    while(ch[i] !='\0')                         //find the length of string without using strlen
    {
        count++;
        i++;
    }
    printf("\nlength = %d",i);                  
    printf("\nusing strlen = %d",strlen(ch));   //using strlen
    return 0;           
}