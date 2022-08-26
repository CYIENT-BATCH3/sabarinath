/*
 * write a program to convert the 2 digit id to binary form
 */
 #include<stdio.h>
 #include<stdbool.h>
 
 enum week_day { sunday = 1 ,monday= 2 ,tuesday= 3,wednesday= 4,thursday= 5,friday= 6,saturday= 7} ;        //decalre enumerated data type with weekday
 int main()
 {  
    int num;
    printf("enter the number for the day :  ");                                                             //input data from users
    scanf("%d",&num);
    if(num == sunday)                                                                                       //check for the values with enum value
            printf("\n sunday");
    else if(num == monday)
            printf("\n monday") ; 
     else if(num == tuesday)
            printf("\n tuesday") ;  
    else if(num == wednesday)
            printf("\n wedbesday") ; 
    else if(num == thursday)
            printf("\n thursday") ;  
    else if(num == friday)
            printf("\n friday") ;  
    else if(num == saturday)
            printf("\n saturday") ;
    else
            printf("wrong option");
 }