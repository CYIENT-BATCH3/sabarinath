/*
 * monter_bit.c
 * start
 * increment value from 0 to 10
 * check the 0th bit and print corresponding output
 *
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */

#include<stdio.h>

int main()
{
	setbuf(stdout,NULL);			//for compailer
	int i =0;
	for(i=0;i<=10;i++)				//loop increment from 0 to 10
	{
		if(i & 0x01)				//check for 0th bit weather it is 1 or 0
			printf("\n%d = flag is set",i);			//if it is 1 print flag is set
		else
			printf("\n%d = flag is not set",i);		//else print flag is not set
	}

}
