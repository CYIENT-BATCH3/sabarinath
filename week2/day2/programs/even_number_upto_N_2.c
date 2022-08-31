/*  print number upto n in reverse order   */


#include<stdio.h>
int main ()
{
    int num,i=1;
    printf("enter the number:  ");
    scanf("%d",&num);
   while(num>0)
    {
        if(num%2 ==0)
        printf("%d\t",num);
        num--;
    }
}
