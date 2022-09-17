/* search in array using pointers
 *
 *
 * search_in_array.c
 *
 * start
 * take the limit for array
 * take the array elements from the users
 * take the number for search in the array
 * pass the array to fn using pointer
 * serch for the number in the entire array using loop
 * print the position and element when found in array
 * 
 *
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */

#include<stdio.h>

void search_array(int *,int lim,int num);
int main()
{
	setbuf(stdout,NULL);
	int a[20],lim,num,*ptr;							//array declaration

	printf("\nenter the array lim:  ");		//take user input for limit
	scanf("%d",&lim);

	printf("\nplease enter the %d elements: \n",lim);		//scan the array elements from the user
	for(int i=0;i<lim;i++)
	{
		printf("\n%d element : ",i);
		scanf("%d",&a[i]);
	}

	printf("\n enter the number for finding:  ");			//take user input the elemnet for finding in th earray
	scanf("%d",&num);
	ptr =a;													//assighn addres of array to pointer variable
	search_array(ptr,lim,num);								//call serch array function bu all by reference method

}




void search_array(int *arr,int lim,int num)					//function defnition for the serach array
{
	int count=0;
	for(int i=0;i<lim;i++)									//iterate upto the lim of array
	{
		if(*(arr+i) == num)									//check for each element weather its equal to the input number
			{printf("\n%d is found in %d position ",*(arr+i),i);		//if it is print its index and number
			count++;										//increase the count
			}
	}
	if(count ==0)											//if count = 0 print its not exixt
		printf("%d does not exist in array",num);

}
