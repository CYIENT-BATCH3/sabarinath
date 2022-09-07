
/*  void pointer  */

#include<stdio.h>

void main()
{
      void *ptr ;                   //declaring void pointer
    int a =20;
    float b = 30.545;
    char ch = 'a';
    int d = 34;
    double f = 56.456;
  
    
    ptr = &a;
    printf("\naddress = %p   value = %d",ptr,*(int*)ptr);       //printing the integar value 
    ptr = &b;
    printf("\naddress = %p   value = %f",ptr,*(float*)ptr);     //printing the float value
    ptr = &ch;
    printf("\naddress = %p   value = %c",ptr,*(char*)ptr);      //printing the char value
    ptr = &d;
    printf("\naddress = %p   value = %d",ptr,*(int*)ptr);       //printing the integar value 
    ptr = &f;
    printf("\naddress = %p   value = %f",ptr,*(double*)ptr);       //printing the integar value 
}
