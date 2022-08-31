/* input 10 sensor value with timestamp and check the noise in it */

#include<stdio.h>
int main()
{
 int num;
 for(int i=1;i<=10;i++)				//loop for taking 10 input
 {
     printf("\n enter %d th sample:  ",i);
     scanf("%x",&num);
     if(num >=0x05 && num <=0xf1)   		//check weather it is in between 0x05 and 0xf1
     printf("\t %d output = %x",i,num);		//then print the value
     else
     printf("its noise");			//else print it as noise
 }
}