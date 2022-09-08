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
    char name[10];								
    int emp_id;
    float salary;
    int phone_number;
    short hello;
    int hi;
}emp_details;

union employee_u								//union declaration									
{
    char name[10];								
    int emp_id;
    float salary;
    int phone_number;

}emp_details_u;


int main()
{
    setbuf(stdout,NULL);
 			//set the structure variable
    printf(" %lu",sizeof(emp_details));						//printing the size of structure and structure elements
    printf("  %lu",sizeof(emp_details.emp_id));
    printf(" %lu",sizeof(emp_details.salary));
    printf(" %lu",sizeof(emp_details.name));
    printf(" %lu",sizeof(emp_details.phone_number));

   printf("\n------------------------------------------\n");			//printing the sizeof union and union elements
    printf(" %lu",sizeof(emp_details_u));
        printf("  %lu",sizeof(emp_details_u.emp_id));
        printf(" %lu",sizeof(emp_details_u.salary));
        printf(" %lu",sizeof(emp_details_u.name));
        printf(" %lu",sizeof(emp_details.phone_number));
}

