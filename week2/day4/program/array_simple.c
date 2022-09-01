/* WAP to read the element and print the elements aof an array using 1D array */

#include<stdio.h>
int main()
{
    int a[50],i = 0,lim;                    //declare variable
    printf("array limit =  ");              //input limit from the user
    scanf("%d",&lim);
    printf("\nenter %d elements ",lim);     //input data from the users
    for(i=0;i<=lim;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n array elemnts is ");         //printing the elements of array
    for(i=0;i<=lim;i++)
    {
        printf(" %d ",a[i]);
    }
}