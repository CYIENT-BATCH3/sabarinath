/*
 * main.c
 *
 *  Created on: Sep 14, 2022
 *      Author: sk69648
 */
#include"header.h"				//include header.h file for the structure defnition
#include<stdio.h>


int main()
{

	 std std1 = {12,"hari"};			//intilising all the 3 structure variables
	 empl emp1= {23,3405};
	 sens sens1= {2,5,8};

	student(std1);						//call all 3 functions
	employee(emp1);
	sensor(sens1);

}
