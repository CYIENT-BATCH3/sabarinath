/* print the fibanacci series upto n */

#include<stdio.h>
int main()
{
 int num,sum =0,t1 =0,t2 = 1,t3 = 0;
 printf("\nenter the number: ");
 scanf("%d",&num);
 printf("%d  %d  ",t1,t2);              //printing the first 2 numbers
 t3 = t1+t2;                            //finding the next vlue
 for(int i=2;i<=num;i++)
 {
    printf("%d  ",t3);                  //printing the next value
    t1=t2;                              //assighning previous value to t1
    t2=t3;                              //assighning current value to t2
    t3= t1+t2;                          //finding the nect value by adding t1 and t2
    
 }
}