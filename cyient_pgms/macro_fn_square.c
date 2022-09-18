/* WAP to find the square of number using macro
 *
 * squre_using_macro.c
 *
 *  Created on: Sep 18, 2022
 *      Author: sk69648
 */

#include<stdio.h>

#define SQR(a)  a*a					//macro function for the square of the number

int main()
{
	setbuf(stdout,NULL);			//for compiler 
	int num ;
	printf("\n enter the number : ");		//take user input
	scanf("%d",&num);
	printf("square = %d",SQR(num));			//call macro function and 
}
