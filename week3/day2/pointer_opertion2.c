
/* pointer operation  */
#include <stdio.h>

int main()
{
    int *a,num1= 10,*d,num3=9;
    float *b,num2 = 20.89;
    char *c,ch= 'a';
    a = &num1;                              //pointer a stores the address of integar number
    b = &num2;                              //pointer a stores the address of float number
    c = &ch;                                //pointer a stores the address of character number
    d = &num3;
    printf("\n%d",a);
    printf("\n%p",a+1);
    printf("\n%p",a+2);
    printf("\n%p",a+3);
    printf("\n--------------");
    printf("\n%p",b);
    printf("\n%p",b+1);
    printf("\n%p",b+2);
    printf("\n%p",b+3);
    
    printf("\n--------------");
    printf("\n%p",c);
    printf("\n%p",c+1);
    printf("\n%p",c+2);
    printf("\n%p",c+3);
    return 0;
}