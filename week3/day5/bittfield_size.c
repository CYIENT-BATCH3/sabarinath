/*
 * bit.c
 *WAP to store the value from 0-7 by using width of 3 bits
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */

#include<stdio.h>

struct student1						//declaring structure without bitfield
{
	unsigned int val1;
	unsigned int val2;
	unsigned int val3;
}str1;

struct student2						//declarin with bit fields
{
	unsigned int val1:2;
	unsigned int val2:4;
	unsigned int val3:4;
}str2;

int main()
{
	printf("1 - %lu      2- %lu",sizeof(str1),sizeof(str2));		//print the size of both structure
}
