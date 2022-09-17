/*program to test the bit
 * test_bit.c
 * start
 * take user input
 * check the status of each bit and count the on bit and off bit
 * 
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


int bit_check(int num1)									//function for checking the bit
{
	int count = 0;
	for(int i=0;i<=7;i++) 								//loop around 8 bit
	{
		if((num1>>i) & 0x01)							//check weather the bit is high or low
			count++;
	}
	return count;										//return the count no of high bit
}


int main()
{
	setbuf(stdout,NULL);
	int num1,count = 0;						    //deaclare variable
	printf("enter the number and bit:");	//take user input from user
	scanf("%d",&num1);
	print_binary(num1);						//printing the binary of user input
	count = bit_check(num1);				//fn call for bit check
	printf("\n%d LED is ON",count);			//print no of led on with count
	printf("\n%d LED is OFF",8-count);		//8 - count gives the alternate

	return 0;
}



