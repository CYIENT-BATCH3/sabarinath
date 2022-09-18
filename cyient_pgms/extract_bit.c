/*program extract  the bit
 * extract_bit.c
 * start
 * take user input
 * take the pin to extract
 * extract the desired pin in the user input using & operator
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


void bit_extract(int num1,int pin_num)									//function for checking the bit
{


		if((num1) & (0x01<<pin_num))							//check weather the bit is high or low
			printf("\n%d bit is 1",pin_num);
		else
			printf("\n%d bit is 0",pin_num);
}


int main()
{
	setbuf(stdout,NULL);
	int num1,pin_num;						    //deaclare variable
	printf("enter the number and bit:");	//take user input from user
	scanf("%d%d",&num1,&pin_num);
	print_binary(num1);						//printing the binary of user input
    bit_extract(num1,pin_num);
	return 0;
}



