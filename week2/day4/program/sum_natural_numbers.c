/* WAP to print sum of natural numbers upto n */

#include<stdio.h>
int main()
{
    int a[50],i = 0,lim,sum=0;;                    //declare variable
    printf("array limit =  ");              //input limit from the user
    scanf("%d",&lim);
    for(i=0;i<=lim;i++)                     //find each elemet upto n
    {
        sum = sum+i;                        //find the sum of each element
    }
    printf("\n sum = %d",sum);
}