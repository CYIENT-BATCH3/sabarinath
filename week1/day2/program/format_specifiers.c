/*
*WAP to input data from user using scanf and display various format specifiers using printf
*/


#include<stdio.h>                           //including standard header file for input outpiut operations
int main()                                  //main function
{
    int val;                                //declaring an integar value 
    printf("enter the value = ");           //input the integar value using scanf
    scanf("%d",&val);
    printf("\ninteger = %%d");              //printing format specifiers for integar
    printf("\nfloat  =  %%f");              //printing format specifiers for float
    printf("\ncharacter = %%c");            //printing format specifiers for character
    printf("\nhexadecimal = %%x");          //printing format specifiers for hexadecimal
    printf("\noctal = %%o");                //printing format specifiers for octal
    printf("\nexponential = %%e");          //printing format specifiers for exponential
    printf("\npointer = %%p");              //printing format specifiers for pointer
    printf("\nunsigned integer = %%u");     //printing format specifiers for unsigned integar
    
    }
    