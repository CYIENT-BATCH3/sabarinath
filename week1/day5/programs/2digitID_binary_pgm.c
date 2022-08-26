/*
 * write a program to convert the 2 digit id to binary form
 */
 #include<stdio.h>
 #include<stdbool.h>
 
 int main()
 {
     int id;
     bool d1,d2,d3,d4,d5,d6,d7,d8;				//declaring the variables 
     //char ch[8];
     printf("enter the ID :");					//inputing the 2 digit ID
     scanf("%d",&id);						
     d1 = id &  0X01;						//extracting last bit and save it into one variable
     d2 = (id>>1) & 0X01;					//extracting 2nd bit
     d3 = (id>>2) & 0X01;
     d4 = (id>>3) & 0X01;					//extracting so on...
     d5 = (id>>4) & 0X01;
     d6 = (id>>5) & 0X01;
     d7 = (id>>6) & 0X01;
     d8 = (id>>7) & 0X01;
     
     printf("0b%i%i%i%i%i%i%i%i",d8,d7,d6,d5,d4,d3,d2,d1);  	//printing the variables
 }