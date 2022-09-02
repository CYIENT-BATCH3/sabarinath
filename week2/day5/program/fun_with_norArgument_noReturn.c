/*  fn with no arguments and no return    */


#include<stdio.h>
void sum()                  //fn to find the sum
{
    int x =9,y=10;
    printf(" sum = %d ",x+y); 
}

void sub()                  //fn to find the substraction
{
    int x =9,y=10;
    printf(" sub = %d ",y-x) ;
}

void divi()                 //fn to find divison
{
    float x =9,y=10;
     printf(" divi = %f ",x/y) ;
    
}

void multi()                //fn to find multiplication
{
    int x =9,y=10;
    printf(" multi = %d ",x*y);
    
}
void main()
{
   
  sum() ;                   //call fn sum
  sub();                    //call fn substraction
  divi();                   //call fn division
  multi();                  //call fn multiplication
 
   
}