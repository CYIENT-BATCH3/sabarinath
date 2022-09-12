/*
 * struct_pass_reference.c
 *
 *  Created on: Sep 12, 2022
 *      Author: sk69648
 */

#include<stdio.h>

typedef struct											//declare the structure using typedef
{
	int emp_id;
	float salary;
	char name[20];

}employee;												//typedef datatype employee

void struct_print(employee *);							//fn prototype with structure pointer as argument

int main()
{
	setbuf(stdout,NULL);
	employee emp1,emp2;									//creating 2 structur variables
	printf("\nenter the details for emp1: ");
	struct_print(&emp1);								//calling fun for input data into 1st struture variable
	printf("\nenter the details for emp2: ");
	struct_print(&emp2);								//calling fun for input data into 2nd struture variable					

	printf("\n-------------------------------------");

	printf("\nemp_id : %d",emp1.emp_id);				//printing the elements of 1st srture variable
	printf("\nemp_name : %s",emp1.name);
	printf("\nemp_id : %f",emp1.salary);
	printf("\n-------------------------------------");

		printf("\nemp_id : %d",emp2.emp_id);		//printing the elements of 2nd srture variable
		printf("\nemp_name : %s",emp2.name);
		printf("\nemp_id : %f",emp2.salary);
}

void struct_print(employee * emp)					//fn defnition to take input from user
{
	printf("\n enter the emp_id: ");
	scanf("%d",&emp->emp_id);
	printf("\n enter the name : ");
	scanf("%s",emp->name);
	printf("\n enter the salary: ");
	scanf("%f",&emp->salary);

}

