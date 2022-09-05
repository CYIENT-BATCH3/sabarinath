
/* wAP to concatinate 2 string without using strcat */

/*
start
declare variable and take user input strings
find the length of 2 strings
appened the second string at the end of first string
print the output

*/

#include <stdio.h>

int main()
{
    char ch1[20],ch2[10];
    int count=0,i=0,len1,len2;
    printf("\nenter the string 1:");               //take user input 
    gets(ch1);
    printf("\nenter the string 2:");               //take user input 
    gets(ch2);
    len1 = strlen(ch1);                            //find length of first string
    len2 = strlen(ch2);                             //find the length of second string 
   // printf("\nlen1 = %d len2 = %d",len1,len2);
    for(i=0;i<=len2;i++)
    {
     ch1[len1+i]=ch2[i];                            //appending the second string with the first string
    }
    //printf("\n length = %d",strlen(ch1));
    
    printf("\n%s",ch1) ;                //concatinated output    
}
