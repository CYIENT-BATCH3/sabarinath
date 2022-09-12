/*
 * structure_arguments.c
 *
 *  Created on: Sep 12, 2022
 *      Author: sk69648
 */

#include<stdio.h>
#include<string.h>
 typedef struct					//declaring structures
{
	int roll_no;
	char name[10];

}student;
void struct_print(student);		//protype for the function with structure argument
int main()
{
	setbuf(stdout,NULL);
	student std1,std2;			//declaring 2 structure variable
	strcpy(std1.name,"sabari");		//assigning name to first variable
	std1.roll_no = 12;

	printf("\nenter the name: ");		//taking user input foor the 2nd structure function
	scanf("%s",std2.name);
	printf("\nenter the roll no: ");
	scanf("%d",&std2.roll_no);
	struct_print(std1);
	struct_print(std2);
}
void struct_print(student std1)
{

    printf("\nname : %s",std1.name);		//printing  structure elements
	printf("\nroll no: %d",std1.roll_no);
	printf("\n------------------------------");
	}


