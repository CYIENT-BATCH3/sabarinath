/* WAP to find the sum of 4 digit number  */


#include<stdio.h>
int main()
{
  int num,sum=0;			//intilize the variables and take input from user
  printf("enter the number:  ");
  scanf("%4d",&num);			
  while(num !=0)			//check while condition until the number become 0
  {
    sum = sum+ (num%10);		//find the sum of the digit by extracting each remainder
    num = num/10;			//avoid the last digit
  }
  printf("sum = %d",sum);		//print the sum
}