/*
 * WAP to print area of circle area of cone area of cylinder
 */

#include<stdio.h>
#include<math.h>
#define PI 3.14								//defining value of pie using macros

int main()
{
	setbuf(stdout,NULL);
	int radius,ht;
	printf("\nenter the radius : ");		//input the radius
	scanf("%d",&radius);
	printf("\nheight : ");					//input the height
	scanf("%d",&ht);
	printf("\narea of circle = %.2f",(float)PI *radius*radius);			//area of circle
	printf("\narea of cone = %.2f",(float)PI *radius*(radius+sqrt(radius*radius+ht*ht));		//area of cone
	printf("\narea of cylinder = %.2f",(float)2*PI *radius*(radius+ht));//area of cylinder

}
