/* WAP to print even numbers from 1 to n using while loop */

#include<stdio.h>
int main ()
{
    int num,i=1;			//declare variable and take user input
    printf("enter the number:  ");
    scanf("%d",&num);
    while(i<=num)
    {
        if(i%2 ==0)			//inside loop check each variable it is even or not and print it
        printf("%d\t",i);
        i++;
    }
}
