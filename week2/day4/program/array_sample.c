//particular array element pgm


#include<stdio.h>
int main()
{
    char b[] = { 'a','b','c','d','e'};
    int a[]  = {1,2,3,4,5};
    for(int i=0;i<9;i++)
    {
    printf("\n %d",a[i]);
    printf("\n %c",b[i]);
    }
    printf("\n%c",b[3]);
    if(b[3]=='d')
    printf("\n it is d");
}
