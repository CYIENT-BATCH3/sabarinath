/*
*program to learn the scanf printf integar number and floating number
*input 2 number and assighn it into 2 variable one in integar and other in float
*/

#include<stdio.h>
int main(void)       						    //main function
{
int num1;            						    //declaring num1 as integar data type
float num2;	    						    //declaring num2 as flating point datatype
printf("enter the 1 integer number and floating number \n");        //asking the users for the input using printf
scanf("%d%f",&num1,&num2);                                          //accepting and assighning the input values to 2 variables using scanf
printf("\n-----output-----\n");					    //output some random strings
printf("integar value = %d \n float value = %.2f",num1,num2);       //output the value input from user as output
}



