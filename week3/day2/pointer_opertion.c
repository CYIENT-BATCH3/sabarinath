/* pointer operation  */
#include <stdio.h>

int main()
{
    int *a,num1= 10;
    float *b,num2 = 20.89;
    char *c,ch= 'a';
    a = &num1;                              //pointer a stores the address of integar number
    b = &num2;                              //pointer a stores the address of float number
    c = &ch;                                //pointer a stores the address of character number
    printf("\naddress of int = %p",a);
    printf("\naddress of float = %p",b);    //printing each addresses
    printf("\naddress of char = %p",c);
    
    printf("\n-------------------------");
    printf("\nvalue of int = %d",*a);
    printf("\nvalue of float = %f",*b);     //printing the value inside the address stored in the pointer
    printf("\nvalue of char = %c",*c);
    return 0;
}
