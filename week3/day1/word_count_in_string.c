/* WAP to count the number of words in the sentance  */

/*
start
declare variable and take user input string
extract the caharacters and check for the the space when space is occured increment the count
print the count

*/

#include <stdio.h>
#include<string.h>

int main()
{
char ch[20];                    //declaring string
int word_count=1;
printf("enetr the sentence : ");        //take string from user
gets(ch);

 for(int i=1;i<=strlen(ch);i++)         //taking each character from string using loop
 {
     if(ch[i]==' ' && ch[i-1] != ' ' )  //comparing the space and also looking the previous value (when 2 space is occured it willnt comnsider)
     word_count++;
 }
 printf("no of word = %d",word_count);      //printing the output

    return 0;
}
