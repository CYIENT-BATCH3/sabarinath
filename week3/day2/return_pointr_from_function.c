
/* WAP to return pointer value to function  */
#include<stdio.h>

int *get_val();

void main()
{
    int *p;             //declaring the pointter
    p = get_val();      //calling pointer function and assighn the address to a pointer
    printf("%p",p);     
    printf("\n%d",*p);
}

int *get_val()
{
    static int a= 10;       //make variable as static or make it is as a global variable
    return(&a);             //return the address of the variable
}