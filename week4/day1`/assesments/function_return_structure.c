/*
 * pgm to return the struct from the function
 * struct_asses.c
 *
 *  Created on: Sep 12, 2022
 *      Author: sk69648
 *      
 *      start
 *      declare structure
 *      declare function prototype for input  fn,add and product fn
 *      declare the structure variable and take input using fn
 *      find the sum and product using 2 different fn and result stored in the same fn itself
 *      
 */

#include<stdio.h>					//includeing header file foer basic input ouput operation


typedef struct						//structure declaration
{
	int num1;
	float num2;
	float sum;
	float prod;
}maths_operation;					//structure datatype using typedef
maths_operation input_vals();		//prototype for taking user input function
maths_operation product(maths_operation);	//prototype for product func
maths_operation sum(maths_operation);		//proto for sum fn

int main()
{
	setbuf(stdout,NULL);
	maths_operation op1;					//declaring structure variable
	op1 = input_vals();						//taking input to the structure using function with return struct 

	printf("\n after every operation structure 1 = ");
	op1 = product(op1);						//fn call for product fn with user input structure as argument and result stored in the same struct variable
	op1 = sum(op1);							//fn call for product fn with user input structure as argument and result stored in the same struct variable
	printf("\n num1 = %d	num2 = %.2f	sum = %0.2f	product = %.2f",op1.num1,op1.num2,op1.sum,op1.prod);


}

maths_operation input_vals()			//function defnition for taking user input fn
{
	maths_operation op;
	printf("enter the int and float values");
	scanf("%d%f",&op.num1,&op.num2);
	return op;							//return the structure
}

maths_operation product(maths_operation op)		//defnition for product fn
{
	op.prod = (float)op.num1 * op.num2;
	return op;
}

maths_operation sum(maths_operation op)			//defniyion for sum fn
{
	op.sum = (float)op.num1 + op.num2;
	return op;
}
