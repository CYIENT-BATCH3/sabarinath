/*  array of pointers   */

#include<stdio.h>

void main()
{
    int a[5]={1,2,3,4,5};				//declaration of array
    int *b[5];						//declaration of array of pointer
    for(int i=0;i<5;i++)				
    {b[i] = &a[i];					//assignhing address odf array to pointer array
    printf("\t %p   %d",&a[i],a[i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--)
    printf("\t %p   %d",b[i],*b[i]);			//printing the array of pointer and its values
   /* printf("\n %p  %d %p %d %p %d",a,*a,&a,*a,(a+0),*(a+0));
    
    printf("\n %p  %d %p %d %p %d",a,*a,&a,*a,(a+0),*(a+0));
   */

}
