/*
 * dec_to_bin.c
 *
 *start
 *start take user input from the user
 *consider the compailer as 16 bit and using for loop shift the number with the iteration
 *extract each bit and print it
 *
 *program to convert user input decimal value to the binary value
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */

#include<stdio.h>

void dec_to_binary(int);			//fn for the decimal to binary conversuion


int main()
{
	setbuf(stdout,NULL);
	int num;
	printf("\n enter the binary number:  ");		//take user inpurt in main program
	scanf("%d",&num);
	dec_to_binary(num);								//call the function for the decimal to binary conversion
	return 0;

}

void dec_to_binary(int num)
{
	for(int i=15;i>=0;i--)							//iterate the loop until 16 values is read
	{
		if( num & (1<<i))							//extract each bit from the number and print it
			printf("%d",1);							//if it is high thenprint 0
		else
			printf("%d",0);							//if it is low print 0;


	}
}

