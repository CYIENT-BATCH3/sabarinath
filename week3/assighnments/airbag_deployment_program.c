/*
 * asses.c
 *
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */


/*
 * assesment_oedstrian airbag.c
 *
 *  Created on: Sep 9, 2022
 *      Author: sk69648
 */


#include<stdio.h>
#include<string.h>
int i=0,center_index=0,left_index=0,x=0,right_index=0,val=0,size;
void merge_data(int *,int *,int *,char *);
int airbag_deploy(char *,int);

int main()
{

	char f_p_data[20];			//decalring array for storing valid data
	/*
	 * declaring and intilizing the 3 arrays for each pressure sensor with 50 values on each array
	 */
	int pr[50] = {1,2,3,4,5,86,7,8,9,10,1,12,13,14,15,16,17,18,19,20,89,22,23,24,25,26,27,28,29,30,31,32,33,34,35,92,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	int pc[50] = {1,2,3,4,5,6,7,8,9,10,87,12,13,14,15,16,17,18,19,20,21,22,23,24,25,90,27,28,29,30,31,32,33,34,35,36,37,38,39,40,246,42,43,44,45,46,47,48,49,50};
	int pl[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,88,17,18,19,20,21,22,23,24,25,26,27,28,29,30,91,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    /*
     * printing each sensor value in formated output
     */
	printf("\nPL time\t\tPL data\t\tPL time\t\tPL data\t\tPL time\t\tPL data");
	for(int i=0;i<50;i++)
	{
		printf("\n%d\t\t0x%x\t\t%d\t\t0x%x\t\t%d\t\t0x%x\t\t",i+1,pr[i],i+1,pc[i],i+1,pl[i]);
	}
/*
 * calling merge data function to collect only the valid data from the 3 sensor values or arrays
 * filtering out the data from the 150 values
 */

	merge_data(&pr,&pc,&pl,&f_p_data);
    size = strlen(f_p_data);
	val = airbag_deploy(&f_p_data,size);			//calling function to check the requirement for deploying the airbag asnd assignhing the value to a variable
	if(val == 5)								//if it return specified value print airbag deployed
		printf("\n airbag deployed");
	else
		printf("\n not deployed");
}


/*
 * function defnition for merging or filtering the data
 * data filtered out by avoiding data lesss than 0x05 and more than 0xf5
 * data mmust be sampled in 5 ms
 * first sample must be right then center left
 * if the data sampled is faulty then take the next sample coming after 5 ms
 */


void merge_data(int * right,int * center,int *left,char * sensor_data)		//accepeting 4 addr as parameters
{
	printf("\n\n");
	for(i=0;i<50;i=i+5)						//loop for continues working of the block until the index 50 reached
	{
	while(right_index<50)					//iterate until specified condition meet or right index value greater than 50
	{
		if(*(right+right_index) >0x05 && *(right+right_index) < 0xf5)		//check weather the value is in specified range
		{
			*(sensor_data+x) = *(right+right_index);						//then save the value to the declared array with index starts from 0
			printf("\nright\t = %d\t%d\t%x\t%x",right_index,x,*(sensor_data+x),*(right+right_index));		//printing the value for debugging purpose
			x=x+1;								//increment sensor data array index by 1
			i=i+5;								//increment the i loop index with 5
			center_index=right_index+5;			//increment the center index with 5
			break;								//break from right sensor loop

		}
		else									//if condition is not met need to find the next value(next 5th) and campare the same
			{
			right_index=right_index+5;			//right index incremented by 5
			i=i+5;								//i loop also incremented by 5
			continue;}	}						//again continue the process until it gets a valid value
/*
 * same thing done for the right sensor is to be implemented for the center sensor
 * if it got a valid data then increment the left index with center index+5
 */

	while(center_index<50)
		{
			if(*(center+center_index) >0x05 && *(center+center_index) < 0xf5)
			{
				*(sensor_data+x) = *(center+center_index);
				printf("\ncenter\t= %d\t%d\t%x\t%x",center_index,x,*(sensor_data+x),*(center+center_index));
				x=x+1;
				i=i+5;
				left_index=center_index+5;
				break;
			}
			else
				{center_index=center_index+5;
				i=i+5;
				continue;
				}
		}
	/*
	 * same thing done for the right sensor is to be implemented for the left sensor
	 * if it got a valid data then increment the right index with left index+5
	 */

	while(left_index<50)
		{
			if(*(left+left_index) >0x05 && *(left+left_index) < 0xf5)
			{
				*(sensor_data+x) = *(left+left_index);
				printf("\nleft\t= %d\t%d\t%x\t%x",left_index,x,*(sensor_data+x),*(left+left_index));
				x=x+1;
				right_index=left_index+5;
				i=i+5;
				break;
			}
			else{
				left_index=left_index+5;
				i=i+5;
				continue;
			}
		}

	}
   }

/*
 * function for check the requirements for deploying the air bag
 * when it read continuos value that is greater then 0x55 then return specified value and compare it
 * with the value in main and do the correponding work
 *
 */

int airbag_deploy(char * fp_data,int size)
{
	int count = 0;
	for(int i = 0;i<size;i++)
	{
		if(fp_data[i]>0x55)
		{
			count++;
			if(count == 5)
				break;
		}
		else
			count = 0;

	}
	return count;
}






