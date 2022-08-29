/*
 *WAP to input marks and print its corresponding ranking
 */

#include<stdio.h>
int main()		
{
    int a;
    printf("enter the marks   = ");			//input the mark from user
    scanf("%d",&a);
    if(a >= 70 && a<=100)				//according to condition print the corresponding output
    printf("distinvtion");
    else if((a>=60) && (a<70))
    printf("first class");
    else if((a>=50)&&(a<60))
    printf("second class");
    else if((a>=40)&&(a<35))
    printf("pass");
    else
    printf("fail");
}

