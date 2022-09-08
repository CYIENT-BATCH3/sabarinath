/*structure programe to read array of structure   */

/*
 * start
 * declare structure
 * create structure variable in main
 * take user input  
 * print the structure
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
    struct employee emp_details;			//set the structure variable						
    
        printf("\nemployee %d name : ",i);
        scanf("%s",emp_details[i].name);
        printf("\nemployee %d emp_id : ",i);
        scanf("%d",&emp_details[i].emp_id);
        printf("\nemployee %d salary",i);
        scanf("%f",&emp_details[i].salary);
    

 						
    
    	printf("\n-----------------employee %d---------------",i);
        printf("\nemployee %d name : %s",i,emp_details[i].name);
        printf("\nemployee %d emp_id : %d",i,emp_details[i].emp_id);
        printf("\nemployee %d salary : %f",i,emp_details[i].salary);
    
}