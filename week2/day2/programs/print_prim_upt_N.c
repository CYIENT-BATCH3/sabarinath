/* WAP to print prime numbers between 1 to n*/

#include<stdio.h>
int main ()
{
    int num,i=2,flag=0, count=1;
    printf("enter the number:  ");		//take the user input
    scanf("%d",&num);
    
    while(count <= num)				//loop for taking each value upto n
    {
        while(i <= count/2)			//loop for finding each divisor
        {
            if(count % i ==0)			//check for diivisiblity
            {flag = 1;break;}			//set flag
            i++;
        }
        if(flag ==0)				//check flag
        printf("%d",count);
        count++;
        flag = 0;
    }
        
}

