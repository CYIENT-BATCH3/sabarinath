/*
 * WAP to input 10 character and find its ASCII value 
 *
 *
 */



#include<stdio.h>                                               //standard input output header file        
int main()
{
   char ch[11] ;                                                //declare the character variable
   printf("\n enter 10 character without space or enter");
   for(int i=1;i<=10;i++)                                       //loop for counting upto 10
   {
       ch[i] = getchar();                                       //accepting 10 characters using for loop
      // getchar()						// for input value using space or enter
}
   printf("\n----ASCII VALUES----");                            
   for(int i=1;i<=10;i++)
   {
       printf("\n%c = %d",ch[i],ch[i]);                         //printing ascii value of each charactor using %d format specifiers
   }
}