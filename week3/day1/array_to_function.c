/* passing array to function */

/*
start
decalre varaiable and take user input
find the sum of any 2 wlwmwnts in an array  using function
find the sum of whole array using function
print both the result

*/

#include <stdio.h>
void arr_fn(int,int);
void entire_arr(int a[]);
int main()
{
    int arr[]={3,2,5,9,5};
    arr_fn(arr[0],arr[2]);              //passing the array elements to function
    entire_arr(arr);                    //passing entire array as elements
    return 0;
}

void arr_fn(int x ,int y)               //function to find the sum of elements in the array
{
    int sum;
    sum = x+y;
    printf("\nsum of 2 numbers from array = %d",sum);
}

void entire_arr(int a[])                //function to find the entire sum of the elements in array
{
    int sum=0,size ;
    //size = sizeof(a)/sizeof(int);
    for(int i = 0;i<=4;i++)
    sum = sum+a[i];
    printf("\ntotal sum = %d",sum);
}