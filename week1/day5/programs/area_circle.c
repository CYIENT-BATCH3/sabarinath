/* the entire area of the circular border is to be covered grass by a gardner the radius of garden is given by user i/p and 
calculate the area that has to be covered */

#include<stdio.h>
#define PI 3.14                             //defien the value of PI as 3.14
int main()
{
    float area =0;                          //declaring the variables
    int radius = 0;
    printf("\nenter the radius : ");
    scanf("%d",&radius);                    //accepeting the radius from user
    area =  PI * radius * radius;           //calculating the area and printing it next step
    printf("area to be covered is = %.4f",area);
    return 0;
}