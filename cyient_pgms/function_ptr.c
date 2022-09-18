/*
 * WAP to use function pointer to find add and sub
 *
 * start
 * create function for addition and substraction
 * in main create function pointer and assighn the address of function to that pointer
 * invoke the function using pointer
 *
 * file_pointer.c
 *
 *  Created on: Sep 18, 2022
 *      Author: sk69648
 */

#include<stdio.h>
int sum(int,int);							//fn declaration
int sub(int,int);

int main()
{
	setbuf(stdout,NULL);					//compailer purpose
	int (*sum_fn_ptr)(int,int)=&sum;		//function pointer for sum function
	int (*sub_fn_ptr)(int,int)=&sub;		//function pointer for sub function
	int sum_result,sub_result,num1,num2;	//declaration fro variables
	printf("enter the number 1 and 2 : ");	//take user input
	scanf("%d%d",&num1,&num2);
	sum_result= (*sum_fn_ptr)(num1,num2);	//function call for sum
	sub_result= (*sub_fn_ptr)(num1,num2);	//fn call fro sub
	printf("\nsum = %d",sum_result);		//print the result
	printf("\tsub = %d",sub_result);
}

int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
