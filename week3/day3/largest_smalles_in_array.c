

/*  WAP to print the biggest and smallest elemnt using array   */
/*
start
initilize variable and take user input
take the array limit and array elements
compare each element for smallest
compare each element for largest


*/

#include<stdio.h>

void main()
{
    int a[20],lim,small=0,bigg=0;               //decalaring variables 
    printf("\n enetr the limit of array : ");   //take user input
    scanf("%d",&lim);
    for(int i=0;i<lim;i++)                      //take each integar and stored in array
    {
        printf("\n enter %d elemnt",i);
        scanf("%d",&a[i]);
    }
    small = a[0];                               //intilizing the small variable with a[0]
    for(int i=0;i<lim;i++)
    {
        if(bigg < a[i])                         //check for big number
        {
            bigg = a[i];
        }
        
        if(small >= a[i])                       //check for small number
        {
            small = a[i];
        }
    }
    
    printf("\nbiggest = %d",bigg);
    
  printf("\nsmallest = %d",small);
}
