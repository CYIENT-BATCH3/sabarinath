/*
 *WAP to implement 4 types of data using formatted IO and 3 type of unformatted input
 */

#include<stdio.h>
int main()
{
   int num1,num2,num3;                              //declare variables
   float numf;
   char ch1,ch2,ch3;
   printf("enter 4 number for formatted input \n");
   scanf("%d%d%d%f",&num1,&num2,&num3,&numf);       //input data from users
   printf("enter 3 characters:   ");
   getchar();                                       //compailer doesnt take initial value so avoid the error we used 1 extra getchar
   ch1 = getchar();
   ch2 = getchar();                                 //input 3 character
   ch3 = getchar();
   
    /* printing all formated and unformated values   */
   printf("\nformated data \n");
   printf("%d  %d  %d  %f",num1,num2,num3,numf);
   printf("\n\n unformatted data \n");
   putchar(ch1);
   printf("\t");
   putchar(ch2);
   printf("\t");
   putchar(ch3);
   printf("\t");
}