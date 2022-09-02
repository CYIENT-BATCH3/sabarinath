

/* fn with no return and with arguments  */


#include<stdio.h>
int num1,num2;
void sum(int x,int y)                  //fn to find the sum  with formal parameters
{
    
    printf("\n sum = %d ",x+y); 
}

void sub(int x,int y)                  //fn to find the substraction
{
   
    printf("\n sub = %d ",x-y) ;
}

void divi(int x,int y)                 //fn to find divison
{
    
     printf("\n divi = %0.2f ",((float)x/(float)y)) ;
    
}

void multi(int x,int y)                //fn to find multiplication
{
   
    printf(" \n multi = %d ",x*y);
    
}
void main()
{
  printf("\enter 2 numbers : ");
  scanf("%d%d",&num1,&num2);
  sum(num1,num2) ;                   //call fn sum with actual parameters
  sub(num1,num2);                    //call fn substraction
  divi(num1,num2);                   //call fn division
  multi(num1,num2);                  //call fn multiplication
 
   
}