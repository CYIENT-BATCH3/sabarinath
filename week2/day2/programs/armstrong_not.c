/*
 *WAP to print weather a number is armstrong or not 
 */


#include<stdio.h>
 int main()
 {
    int rem,temp,num,val=0;
    printf("enter the number : ");			//take user input
    scanf("%d",&num);
    temp = num;						//saving the value to temp
    while(temp > 0)					//find the reverse of the number
    {
        rem = temp%10;
        val = rem*rem*rem + val;
        temp=temp/10;
    }
    if(val==num)					//check the reverse and the orinal number is same then it is armstrong else not
    printf("    armstrong number");
    else 
    printf("  not armstrong");
 }
