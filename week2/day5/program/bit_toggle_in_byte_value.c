/*   WAP to input a byte value and bit value and toggle the bit position in the byte value      */

/*
 * start
 * take the byte value and bit value from the user
 * toggle the bit position in the byte value
 * convert the final output to binary and print the 
 * print the output
 */

#include<stdio.h>
char fun_to_toggle_bit(int byte_val,int bit_val)            //function to togglr the bit postion in the byte value
{
  return  ( byte_val ^ ( 1 << bit_val ));                   //using the exor and left shift operator to toggle the correponding bit
}

void print_in_binary(int value)                             //to conver the decimal value to binary
{   int binary[8];                                          //to store the each bit of byte value
    for(int i=0;i<8;i++)
        binary[i] = (value>>i)&(1);
    for(int i=7;i>=0;i--)                                   //printing the elements of array in reverse order to get proper orientaion in output
        printf("%d",binary[i]);
}

void main()
{
    int byte_val,val,i;
    int bit_val;
    char inp_binary,out_binary;
    printf("\n enter the the byte value in hex : ");            //user input
    scanf("%x",&byte_val);
    printf("\n enter the position of bit to toggle 1..8 :");
    scanf("%d",&bit_val);
    val = fun_to_toggle_bit(byte_val,bit_val);                  //function call
    printf("\nbinary format");
    printf("\n input     :");
    print_in_binary(byte_val);                                  //printing binary of input byt vale
    printf("\n output    :");
    print_in_binary(val);                                       //print output value after toggling in binary format
    
}