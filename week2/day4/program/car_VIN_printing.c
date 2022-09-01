/* pgm to print upto 20 car vin made in different plant  */


#include<stdio.h>
int main()
{
    int p1,num, ;
    printf("\n enter the plant 1:EC  2:HY  3:PU");
    scanf("%d",&p1);
    if(p1==1)
    {   
        printf("\nenter the 6 digit serial number  ");
        scanf("%d",&num);
        for(int i=num;i<num+20;i++)
        printf("\n ZCYLE10PZYE%d",i);
    }
    if(p1==2)
    {
        printf("\nenter the 6 digit serial number  ");
        scanf("%d",&num);
        for(int i=num;i<num+20;i++)
        printf("\n ZCYLE10PZYH%d",i);
    }
    if(p1==3)
    {
        printf("\nenter the 6 digit serial number  ");
        scanf("%d",&num);
        for(int i=num;i<num+20;i++)
        printf("\n ZCYLE10PZYP%d",i);
    }
}
