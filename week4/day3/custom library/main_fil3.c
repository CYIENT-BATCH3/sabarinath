/*
 * calculator using dynamic library.c
 *
 *start
 *accept user input for the operand and operator
 *according to operator do the necessary task using different function defined in the diffrent file
 *print the result
 *
 *  Created on: Sep 14, 2022
 *      Author: sk69648
 */


#include<stdio.h>
#include"function_prototype.h"				//defien the header file which contain the function prototype of the function calculator

int main()
{
	setbuf(stdout,NULL);
	int num1,num2;							//declare 2 variable
	char ch;								//character for the operands
	printf("\n enter the character : + - * /  ");
	scanf("%c",&ch);						//take user input for the operators and operands
	printf("\nenter the number");
	scanf("%d%d",&num1,&num2);
	printf(" %d %c %d = %d",num1,ch,num2,calculator(ch,num1,num2));	//call calculator fn with arguments
}
