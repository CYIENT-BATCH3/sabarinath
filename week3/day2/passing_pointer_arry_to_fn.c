
/* WAP to pass pointer as a arguments to the function  */


#include<stdio.h>

float array_avg(int *,int);                 //fn prototype for the function

void main()
{
    int a[5];                               //array declaration
    float avg=0;
    printf("enter the 5 array elements : ");    //input 5 data from user using loop
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    avg = array_avg(a,5);                       //function call for find the average of array by passing array and no.of elements 
    printf("\n average = %f",avg);
    
}

float array_avg(int * a,int num)                //fn defnition for find the avg of the array
{
    int sum = 0;
    float avg = 0;
    for(int i=0;i< num;i++)                     //extract each elements and find the sum of element
    {
      sum += a[i];  
    }
    printf("%d",sum);
   avg= (float)(sum)/(float)num;                //find the  avg

    return avg;
}