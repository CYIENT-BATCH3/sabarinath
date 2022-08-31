/* WAP to check weather the number is prime or not*/

#include<stdio.h>
int main ()
{
    int num,i=2,flag=0;
    printf("enter the number:  ");		//take user input
    scanf("%d",&num);
    while(i<=num/2)				//chack loop upto n/2
    {
        if(num%i == 0)				//if any of its previous value is divisble then set flag as 1
        flag = 1;
        i++;
    }
    if(flag ==0)				//if flag is 0 then print prime number
    printf("number is prime number");
    else 
    printf("number is not prime number");
}