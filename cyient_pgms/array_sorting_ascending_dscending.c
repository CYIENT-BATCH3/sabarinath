/*
 * sort_array.c
 *
 * start
 * take the limit for the array
 * take no of array element
 * sort the arry in ascending order or descending order
 * printed the sorted array
 *
 *  Created on: Sep 17, 2022
 *      Author: sk69648
 */

#include<stdio.h>

void sort_array(int *,int lim);
void sort_array_descending(int * arr,int lim);
int main()
{
	setbuf(stdout,NULL);
	int a[20],lim;							//array declaration

	printf("\nenter the array lim:  ");		//take user input for limit
	scanf("%d",&lim);

	printf("\nplease enter the %d elements: \n",lim);		//scan the array elements from the user
	for(int i=0;i<lim;i++)
	{
		printf("\n%d element : ",i);
		scanf("%d",&a[i]);
	}


	sort_array_ascending(&a,lim);										//fn call for the sort array
	sort_array_descending(&a,lim);
}
	void sort_array_ascending(int * arr,int lim)						//fn defnkittion  for the sorting function
	{
		int temp;
		for(int i=0;i<lim;i++)								//loop for taking the firstv value for comparison
		{
			for(int j = i;j<lim;j++)						//loop for taking second value from i to limit
			{
				if(arr[i]>arr[j])							//compare the values in i,j index
				{
					temp = arr[j];							//if it is bigger then swap the values using temp variable
					arr[j]= arr[i];
					arr[i]= temp;
				}
			}
		}
		printf("\nsorted array in ascending :");						//print the sorted array
		for(int i=0;i<lim;i++)
		{
			printf(" %d ",arr[i]);
		}
	}



	void sort_array_descending(int * arr,int lim)						//fn defnkittion  for the sorting function
		{
			int temp;
			for(int i=0;i<lim;i++)								//loop for taking the firstv value for comparison
			{
				for(int j = i;j<lim;j++)						//loop for taking second value from i to limit
				{
					if(arr[i]<arr[j])							//compare the values in i,j index
					{
						temp = arr[j];							//if it is bigger then swap the values using temp variable
						arr[j]= arr[i];
						arr[i]= temp;
					}
				}
			}
			printf("\nsorted array in descending : ");						//print the sorted array
			for(int i=0;i<lim;i++)
			{
				printf(" %d ",arr[i]);
			}
		}



