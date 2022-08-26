/*
 * implement basic logic gates using C (AND OR NOT) consider input as 0,0
 */
 
 #include<stdio.h>
 int main()
 {
     int a = 0,b = 0;                       //declaring variables
    printf("\nAND = ");
    (a&&b) ? printf("1"):printf("0");       // printing AND logic for the input
    printf("\nOR = ");
    (a||b) ? printf("1"):printf("0");       //printing OR logic of the input
    printf("\nNOT = ");
    (!a)   ? printf("1"):printf("0");       //printing NOT logic of the input
     
 }