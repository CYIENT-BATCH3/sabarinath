/*  array of character pointers   */

#include<stdio.h>

void main()
{
    char *names[]=					//creating array of character pointer
    {
        "hello world","world","program","abcd"
        
    };
    
    for(int i=0;i<4;i++)				//printing each elements
    {
        printf("\n %d  %p   %s",i,&names[i],names[i]);
    }
}
