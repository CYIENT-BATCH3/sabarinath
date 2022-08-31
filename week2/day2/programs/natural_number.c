/* WAP to print all natural numbers between 1 to n*/

#include<stdio.h>
int main ()
{
    int num,i=1;
    printf("enter the number:  ");		//take input from user
    scanf("%d",&num);
  do{
      printf("%d  ",i);  			//using loop print number upto n
      i++;
  }while(i<=num);
}
