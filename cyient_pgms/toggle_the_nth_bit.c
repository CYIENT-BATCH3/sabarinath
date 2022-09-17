/*program to toggle a bit
 * pgm2.c
 * start
 * take user input
 * take the pin to toggle
 * toggle the desired pin in the user input using exor operator
 *
 *
 *
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */

#include<stdio.h>

void print_binary(int num)								//function definition for the print binary
{
	printf("\nin binary format :  \n");
		for(int i=7;i>=0;i--)							//it is 8 bit data so iteration from 7 to 0
			{
				if( num & (1<<i))						//extract each bit from the number and print it MSB first
					printf("%d",1);						//if it is high then print 1
				else

					printf("%d",0);						//if it is high then print 0
			}
}


int toggle_bit(int num1,int pin_no)
{
	num1 ^= (1<<pin_no);	//set the nth bit using exor and shift operator
	print_binary(num1); //function call for the print the binary
	return num1;
}


int main()
{
	setbuf(stdout,NULL);
	int num1,pin_no;						    //deaclare variable
	printf("enter the number and bit:");	//take user input from user
	scanf("%d%d",&num1,&pin_no);
	print_binary(num1);
	printf("\n output in integaer :%d",toggle_bit(num1,pin_no));	//call the function to return the output in integaer format
	return 0;
}



