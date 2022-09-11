/*
 * 3_bit_program.c for bitfields
 *
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */

#include<stdio.h>
struct bit_field						//create structure
{
	unsigned int val:3;					//create variable with 3 bit field
}str1;
int main()
{
	str1.val= 10;						//assighning values to the structure
	printf("enetr the number upto 7: ");
	//scanf("%d",&str1.val);			//cant use scanf with bit fields

	printf("\nenetrd value is %u ",str1.val);	//

}

