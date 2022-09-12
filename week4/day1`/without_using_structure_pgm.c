/*
 * pass_reference with out using struture.c
 *
 *  Created on: Sep 12, 2022
 *      Author: sk69648
 */

#include<stdio.h>

void struct_print(int*,float*,char*);
int main()
{
	setbuf(stdout,NULL);
	int emp_id;                                 //declaring variables
	float salary;
	char name[20];
	struct_print(&emp_id,&salary,name);        //passing address of the variables to the fn


	printf("\n-------------------------------------");

	printf("\nemp_id : %d",emp_id);				//printing the elements variables
	printf("\nemp_name : %s",name);
	printf("\nemp_id : %f",salary);
	printf("\n-------------------------------------");

}

void struct_print(int* id,float* sal,char* ch)					//fn defnition to take input from user
{
	printf("\n enter the emp_id: ");
	scanf("%d",id);
	printf("\n enter the name : ");
	scanf("%s",ch);
	printf("\n enter the salary: ");
	scanf("%f",sal);

}

