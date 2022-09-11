/*
 * typedef_structure.c
 *
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */

#include<stdio.h>
#include<string.h>

typedef struct					//typedef for structure
{
	int std_id;
	int age;
	char name[20];
}student;

int main()
{

	setbuf(stdout,NULL);
	//typedef struct student stud;
	student s1,s2;
	printf("enter the values");								//input value from the user
	scanf("%d%d%d%d",&s1.std_id ,&s1.age,&s2.std_id,&s2.age);
	printf("\n enetr the name for structure ;");
	scanf("%s",s1.name);




	printf("\n %d   %d",s1.age,s1.std_id);
	printf("\n %d   %d",s2.age,s2.std_id);					//printing the element
	printf("\n%s",s1.name);

}
