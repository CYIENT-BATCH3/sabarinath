/*
 * use 4 relational operator with conditional operator
 */
 
 #include<stdio.h>
 int main()
 {  
     int num;
     printf("\nenter the number  ");                                                             //declare variables 
     scanf("%d",&num);
     (num>100) ? printf("\nthe value grater than 100"): printf("\nthe value less than 100");     // using different conditional operators
     (num == 100) ? printf("\nthe value is 100"): printf("\nthe value is not 100");
     (num%2 == 0) ? printf("\nthe number is even") : printf("\nthe number is odd");
     (num <= 1000) ? printf("\n number is less than 1000") : printf("\n the number is greater than 1000");
     
 }