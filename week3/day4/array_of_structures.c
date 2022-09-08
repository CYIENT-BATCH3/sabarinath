/*structure programe to read array of structure   */

/*
 * start
 * declare structure
 * create structure variable in main
 * take the lim from user input
 * take user input  until the lim is reached
 * 
 */

#include<stdio.h>

struct employee									//structure declaration
{
    char name[10];								//structure  elements
    int emp_id;
    float salary;
};

void main()
{
    setbuf(stdout,NULL);
    struct employee emp_details[10];			//set the structure variable
    int lim;
    printf("enter the lim of employees");		//input the structure limit
    scanf("%d",&lim);
    for(int i=0;i<lim;i++)						//loop for each structure 
    {
        printf("\nemployee %d name : ",i);
        scanf("%s",emp_details[i].name);
        printf("\nemployee %d emp_id : ",i);
        scanf("%d",&emp_details[i].emp_id);
        printf("\nemployee %d salary",i);
        scanf("%f",&emp_details[i].salary);
    }

    for(int i =0;i<lim;i++)						//printing the structure
    {
    	printf("\n-----------------employee %d---------------",i);
        printf("\nemployee %d name : %s",i,emp_details[i].name);
        printf("\nemployee %d emp_id : %d",i,emp_details[i].emp_id);
        printf("\nemployee %d salary : %f",i,emp_details[i].salary);
    }
}