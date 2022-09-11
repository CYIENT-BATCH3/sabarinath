/* create project with 3 diffrerent header files to do 3 different arithemetic operation  */


#include<stdio.h>
#include"addition.h"					//adding addition header file
#include"difference.h"					//adding diiference header file
#include"multiplication.h"				//multiplication

int main()
{
	setbuf(stdout,NULL);
	int num1,num2;						//take user input

	printf("enter 2 number : ");
	scanf("%d%d",&num1,&num2);			//scan the user input
	printf("\nsum = %d",sum(num1,num2));			//call sum fn

	printf("\ndifferenece = %d",diff(num1,num2));	//call difference function

	printf("\nproduct = %d",prod(num1,num2));		//call product function


}
