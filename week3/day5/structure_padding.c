/*
 * str_pad.c
 *
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */

#include<stdio.h>
#pragma pack(1)								//direct the compailer to pack the memoery to save the memoery from structure padding
struct student								//create the structure with different data type
{
	char ch;
	int val;
	float val2;
}s1;

int main()
{
	int a,b,c;
	//printf("%u%u")							//printing the size of structure and elements
	printf("\nsize of int = %u",sizeof(s1.val));
	printf("\nsize of char = %u",sizeof(s1.ch));
	printf("\nsize of float = %u",sizeof(s1.val2));
	printf("\nsize of struct = %u",sizeof(s1));
}
