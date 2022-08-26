/*
 * WAP to print the storage space taken by the float type and its range of values
 */



#include<stdio.h>                                               //standard input output header file        
#include<float.h>                                               //header file for float operations
int main()
{
printf("\nsize of float = %ld",sizeof(float));                  //print the sizeof float using sizeof operator
printf("\nmin  val = %f \nmax val = %e",FLT_MIN,FLT_MAX);       //max and min value for float datatype is stored as a macro under float.h
}
