/* WAP to create struct student with elements stu_name,stu_id,stu_age of 5 members
 * struct_student.c
 *
 * start
 * declare structure  with name student
 * declare structure elements as age id name
 * cretae for 5 members decalre as array
 * assighn values
 * print the values
 *
 *
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */


#include<stdio.h>							//header file for std input ouput opertaions

typedef struct								//sturcture declaration for student
{
	char stu_name[20];
	int stu_id;
	int stu_age;
}student;									//structure datatype as student

void accept_data(student *);				//function prototype for accept data to structurre
void print_data(student *);					//fucntion prototype for print data of structure

int main()
{
	setbuf(stdout,NULL);					//compailer purpose
	student student_data[5];				//declaring stucture variable as array of 5 elemnts
	accept_data(&student_data);				//pass by referebnce for accepting data
	print_data(&student_data);				//pass by referebnce for print data
}

void accept_data(student * std)				//fn defnition for acceopt data
{
	for(int i=0;i<5;i++)					//iterate the statements for 5 times
	{
		printf("\n%d enter the student name: ",i);
		scanf("%s",std[i].stu_name);
		printf("\n%d enter student age: ",i);
		scanf("%d",&std[i].stu_age);
		printf("\n%d enter student id: ",i);
		scanf("%d",&std[i].stu_id);

	}
}



void print_data(student * std)					//fn defnition for print data
{
	printf("\n\n-------------------------\n");
	printf("sl.no\t\tname\t\tstudent id\t\tage\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%d\n",i+1,std[i].stu_name,std[i].stu_id,std[i].stu_age);
	}

}
_s