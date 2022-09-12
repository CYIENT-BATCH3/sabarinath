/*
 * pgm to return the struct from the function
 * struct_asses.c
 *
 *  Created on: Sep 12, 2022
 *      Author: sk69648
 *
 *      start
 *      declare structure
 *      declare function prototype for input  fn,add and product fn
 *      declare the structure variable and take input using fn
 *      find the sum and product using 2 different fn and result stored in the same fn itself
 *
 */

#include<stdio.h>					//includeing header file foer basic input ouput operation
#include<string.h>

typedef struct						//structure declaration
{
	char name[20];
	int car_id;

}car_st;					//structure datatype using typedef

typedef struct				//second structure
{
	char brand[20];
	char name[20];
	int car_reg;
	float price;
}car_details;				//structure datatype using typedef

car_details user_input_extra(car_st*);			//function prototype of user input function
int main()
{
	setbuf(stdout,NULL);
	car_details car_det;						//decalre strct variable for car_details
	car_st car;									//decalre strct variable for car_st
	printf("enter the car name");				//take user input for the car_st structure
	scanf("%[^\n]s",car.name);
	printf("\nenter the car id: ");
	scanf("%d",&car.car_id);

	car_det = user_input_extra(&car);			//call function to take inpurt from user for the car_details function with address of car_st structure
	
	printf("\n\n-------final output --------------");		//print the content of car_det structure
	printf("\nbrand: %s\t\tname: %s\t\tcar reg: %d\t\tcar price: %f",car_det.brand,car_det.name,car_det.car_reg,car_det.price);

}

car_details user_input_extra(car_st* car)				//function defnition of the user input function
{
	car_details car_d;
	strcpy(car_d.brand,"toyota");
	strcpy(car_d.name,car->name);
	car_d.car_reg = car->car_id;
	car_d.price = 6500000;
	return car_d;										//return the entire structure to main function 
}
