/*
 * date.c
 *
 *  Created on: Sep 14, 2022
 *      Author: sk69648
 */

#include<stdio.h>

typedef struct {					//creating structure using bit field
	unsigned int mon:4;
	unsigned int day:5;
	unsigned int year;
}date;

int main()
{
	setbuf(stdout,NULL);
	date dt1;						//creating structure variable
	int m,d,y;
	printf("enter the day , month  ,  year: ");		//take user input
	scanf("%d%d%d",&d,&m,&y);
	dt1.day = d;					//assign the values to each elements
	dt1.mon = m;
	dt1.year = y;


	printf("\n date: %d/%d/%d",dt1.day,dt1.mon,dt1.year = y);		//print the elements in formatted way
}
